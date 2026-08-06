/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:17:18 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/06 09:54:01 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	tracker;

	tracker = 0;
	while (src[tracker] != '\0')
	{
		dest[tracker] = src[tracker];
		tracker++;
	}
	dest[tracker] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		tracker++;
	}
	return (tracker);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = NULL;
	copy = malloc (ft_strlen(src) * sizeof (char) + 1);
	ft_strcpy(copy, src);
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					tracker;
	struct s_stock_str	*tab;

	tracker = 0;
	tab = malloc (ac * sizeof (s_stock_str) + 1);
	if (tab == NULL)
		return (NULL);
	while (tracker < ac)
	{
		tab[tracker].size = ft_strlen(av[tracker]);
		tab[tracker].str = av[tracker];
		tab[tracker].copy = ft_strdup(av[tracker]);
		tracker++;
	}
	tab[tracker].str = 0;
	return (tab);
}
