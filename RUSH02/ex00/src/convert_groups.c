/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_groups.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 10:53:09 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 13:40:58 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/**
 * @brief Build the string "1" followed by `scale * 3` zeroes.
 *
 * Used to look up scale words (hundred, thousand, ...) in the dictionary.
 *
 * @param scale Number of groups of 3 zeroes.
 * @return Newly allocated string, or NULL on allocation failure.
 */
char	*build_scale(int scale)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (scale * 3 + 2));
	if (!str)
		return (NULL);
	str[0] = '1';
	i = 1;
	while (i <= 3 * scale)
		str[i++] = '0';
	str[i] = 0;
	return (str);
}

/**
 * @brief Convert a number >= 100 (and < 1000) into words.
 *
 * @param dicts Dictionary array used for word lookups.
 * @param words Output array of words being built.
 * @param nb    Number to convert (>= 100).
 * @param i     Current write index in `words`.
 * @return Updated write index.
 */
int	fill_hundred(t_stock_dict *dicts, char **words, int nb, int i)
{
	int		len;
	int		rest;
	char	nb_str[4];

	len = 0;
	while (dicts[len].number)
		len++;
	words[i++] = find_entry(dicts, ft_itoa(nb / 100, nb_str), len)->value;
	words[i++] = find_entry(dicts, "100", len)->value;
	rest = nb % 100;
	if (rest)
		i = convert_group(rest, dicts, words, i);
	return (i);
}

/**
 * @brief Convert a single group of up to 3 digits into words.
 *
 * @param nb    Number to convert (0-999).
 * @param dicts Dictionary array used for word lookups.
 * @param words Output array of words being built.
 * @param i     Current write index in `words`.
 * @return Updated write index.
 */
int	convert_group(int nb, t_stock_dict *dicts, char **words, int i)
{
	t_stock_dict	*entry;
	char			nb_str[4];
	int				len;
	int				units;

	if (nb == 0)
		return (i);
	len = 0;
	while (dicts[len].number)
		len++;
	if (nb >= 100)
		return (fill_hundred(dicts, words, nb, i));
	entry = find_entry(dicts, ft_itoa(nb, nb_str), len);
	if (entry)
	{
		words[i++] = entry->value;
		return (i);
	}
	units = nb % 10;
	words[i++] = find_entry(dicts, ft_itoa((nb / 10) * 10, nb_str), len)->value;
	words[i++] = find_entry(dicts, ft_itoa(units, nb_str), len)->value;
	return (i);
}
