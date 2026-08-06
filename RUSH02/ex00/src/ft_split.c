/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:59:22 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 11:35:32 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_in_str(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	ctr;

	ctr = 0;
	while (*str)
	{
		if (!is_in_str(*str, charset))
		{
			ctr++;
			while (*str && !is_in_str(*str, charset))
				str++;
		}
		else
			str++;
	}
	return (ctr);
}

int	count_letters(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_in_str(str[i], charset))
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**list;
	int		i;
	int		letter_count;
	int		word_count;

	word_count = count_words(str, charset);
	list = malloc(sizeof(char *) * (word_count + 1));
	if (!list)
		return (0);
	i = 0;
	while (i < word_count)
	{
		while (is_in_str(*str, charset))
			str++;
		letter_count = count_letters(str, charset);
		list[i] = malloc(sizeof(char) * (letter_count + 1));
		if (!list[i])
			return (ft_free_str(list, i));
		ft_strncpy(list[i++], str, letter_count);
		str += letter_count;
	}
	list[i] = NULL;
	return (list);
}
