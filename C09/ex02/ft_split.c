/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 10:23:50 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/05 14:33:48 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_sep(str[i], charset) == 1)
			i++;
		if (!str[i])
			break ;
		count++;
		while (str[i] != '\0' && is_sep(str[i], charset) == 0)
			i++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != '\0' && is_sep(str[i], charset) == 0)
		i++;
	word = malloc ((i + 1) * sizeof (char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && is_sep(str[i], charset) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc((count_word(str, charset) + 1) * sizeof (char *));
	if (tab == NULL)
		return (NULL);
	while (str[j])
	{
		while (str[j] && is_sep(str[j], charset) == 1)
		{
			j++;
			if (str[j] && is_sep(str[j], charset) == 0)
			{
				tab[i] = malloc_word(&str[j], charset);
				i++;
				while (str[j] && is_sep(str[j], charset) == 0)
					j++;
			}
		}
		j++;
	}
	tab[i] = NULL;
	return (tab);
}

#include <stdio.h>
int	main(void)
{
char	str[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj'aimelecaca et patrick propage de fausse informations a des fin malveillantesaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
char	charset[] = "a";
char **split = ft_split(str, charset);
int	i = 0;
    while (split[i])
    {
        printf("%s\n", split[i]);
        i++;
    }
	return (0);
}

