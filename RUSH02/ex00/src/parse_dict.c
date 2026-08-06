/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 10:52:06 by mguinet           #+#    #+#             */
/*   Updated: 2026/08/02 08:17:14 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*realloc_buf(char *buf, int n, int *cap)
{
	int		i;
	char	*new_buf;

	*cap *= 2;
	new_buf = malloc(sizeof(char) * (*cap));
	if (!new_buf)
	{
		free(buf);
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		new_buf[i] = buf[i];
		i++;
	}
	free(buf);
	return (new_buf);
}

char	*get_line(int fd)
{
	char	*buf;
	char	byte;
	int		cap;
	int		n;

	cap = 128;
	byte = 0;
	buf = malloc(sizeof(char) * cap);
	n = 0;
	while (buf && read(fd, &byte, 1) > 0 && byte != '\n')
	{
		if (n >= cap - 1)
			buf = realloc_buf(buf, n, &cap);
		if (buf)
			buf[n++] = byte;
	}
	if (buf && byte != '\n' && n == 0)
	{
		free(buf);
		return (NULL);
	}
	if (buf)
		buf[n] = '\0';
	return (buf);
}

char	**create_tab(int fd, int len)
{
	char	**tab;
	int		i;

	tab = malloc(sizeof(char *) * len);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = get_line(fd);
		i++;
	}
	return (tab);
}

int	get_nb_len(int fd)
{
	char	*str;
	int		count;

	str = get_line(fd);
	count = 0;
	while (str != NULL)
	{
		if (str[0] != '\0')
		{
			count++;
			free(str);
			str = get_line(fd);
		}
	}
	return (count);
}

t_stock_dict	*ft_strs_to_tab(int len, char **strs)
{
	int				i;
	t_stock_dict	*arr;
	char			**test;

	arr = malloc((len + 1) * sizeof(t_stock_dict));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		test = ft_split(strs[i], ": ");
		arr[i].number = test[0];
		arr[i].value = test[1];
		arr[i].size = ft_strlen(arr[i].number);
		free(test);
		if (!arr[i].number || !arr[i].value)
			return (NULL);
		i++;
	}
	arr[i].number = NULL;
	i = 0;
	while (i < len)
		free(strs[i++]);
	free(strs);
	return (arr);
}
