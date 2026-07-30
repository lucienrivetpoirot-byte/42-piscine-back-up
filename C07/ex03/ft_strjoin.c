/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 13:03:48 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/29 18:18:15 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	tracker1;
	int	tracker2;

	tracker1 = 0;
	tracker2 = 0;
	while (dest[tracker1] != '\0')
		tracker1++;
	while (src[tracker2] != '\0')
	{
		dest[tracker1 + tracker2] = src[tracker2];
		tracker2++;
	}
	dest[tracker1 + tracker2] = '\0';
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

char	*ft_strjoin(int size, char **strs, char *sep);
{
	char	*result;
	int	cont;
	int	tracker;
	int	temp

	temp = 0;
	tracker = 0;
	cont = 0;
	result = NULL;
	while (tracker < size) 
	{
		ft_strlen(strs);
		temp = temp + ft_strlent(strs);
		tracker++;
	}
	result = malloc(temp * sizeof (char));
	while (cont < size)
	{
		result = ft_strcat(result, strs);
		result =ft_strcat(result, sep);
		cont++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		char *macron = ft_strjoin(argc - 1, &argv[1], "<3");
		__builtin_printf("%s\n", macron);
	}
}
