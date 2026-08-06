/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:07:03 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 13:34:52 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_str_total_len(char **str, int size)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] && i < size)
		len += ft_strlen(str[i++]);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_length;
	int	i;

	dest_length = 0;
	i = 0;
	while (dest[dest_length])
		dest_length++;
	while (src[i])
	{
		dest[i + dest_length] = src[i];
		i++;
	}
	dest[i + dest_length] = '\0';
	return (dest);
}

void	init_val(char **str, int *val, int end)
{
	(*str)[0] = '\0';
	(*str)[end] = '\0';
	*val = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_len;
	int		i;

	if (size == 0)
	{
		str = malloc(1 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	total_len = ft_str_total_len(strs, size) + ((size - 1) * ft_strlen(sep))
		+ 1;
	str = malloc(total_len * sizeof(char));
	if (!str)
		return (0);
	init_val(&str, &i, total_len - 1);
	while (i < size && strs[i])
	{
		ft_strcat(str, strs[i]);
		if (i++ < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}
