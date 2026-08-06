/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 10:53:12 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 13:48:01 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/**
 * @brief Count the number of valid entries in a dictionary array.
 *
 * @param dicts NULL-terminated (via `.number == NULL`) dictionary array.
 * @return Number of valid entries.
 */
int	get_dict_len(t_stock_dict *dicts)
{
	int	len;

	len = 0;
	while (dicts[len].number)
		len++;
	return (len);
}

/**
 * @brief Append the word for a given scale (hundred, thousand, ...) if any.
 *
 * @param dicts Dictionary array to look the scale word up in.
 * @param words Output array of words being built.
 * @param idx   Current write index in `words`.
 * @param scale Scale exponent (in groups of 3 zeroes) to look up.
 * @return Updated write index (unchanged if `scale <= 0`, the scale word
 * wasn't found, or its allocation failed).
 */
int	add_scale(t_stock_dict *dicts, char **words, int idx, int scale)
{
	char			*scale_str;
	t_stock_dict	*entry;
	int				len;

	if (scale <= 0)
		return (idx);
	len = get_dict_len(dicts);
	scale_str = build_scale(scale);
	if (!scale_str)
		return (idx);
	entry = find_entry(dicts, scale_str, len);
	free(scale_str);
	if (entry)
		words[idx++] = entry->value;
	return (idx);
}

/**
 * @brief Convert every group of digits into words, adding scale words.
 *
 * @param fragments Array of 3-digit (or less) groups, most significant
 * first.
 * @param dicts     Dictionary array used for word lookups.
 * @param words     Output array of words being built.
 * @param nb_groups Number of groups in `fragments`.
 * @return Number of words written into `words`.
 */
int	process_groups(char **fragments, t_stock_dict *dicts, char **words,
		int nb_groups)
{
	int	i;
	int	idx;
	int	group_nb;

	i = 0;
	idx = 0;
	while (i < nb_groups)
	{
		group_nb = ft_atoi(fragments[i]);
		if (group_nb != 0)
		{
			idx = convert_group(group_nb, dicts, words, idx);
			idx = add_scale(dicts, words, idx, nb_groups - 1 - i);
		}
		i++;
	}
	return (idx);
}

/**
 * @brief Convert a number (already split into fragments) into full words.
 *
 * @param fragments Array of 3-digit (or less) groups, most significant
 * first.
 * @param dicts     Dictionary array used for word lookups.
 * @param len       Number of valid entries in `dicts`.
 * @return Newly allocated string with the number spelled out in words, or
 * NULL on allocation failure.
 */
char	*parse_nb(char **fragments, t_stock_dict *dicts, int len)
{
	char	**words;
	int		nb_groups;
	int		idx;
	char	*result;

	nb_groups = get_scale(fragments);
	words = malloc(sizeof(char *) * (nb_groups * 5 + 1));
	if (!words)
		return (NULL);
	idx = process_groups(fragments, dicts, words, nb_groups);
	if (idx == 0)
		words[idx++] = find_entry(dicts, "0", len)->value;
	words[idx] = NULL;
	result = ft_strjoin(idx, words, " ");
	free(words);
	return (result);
}
