/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 09:07:07 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/26 17:51:10 by lrivet-p         ###   ########lyon.fr   */
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

#include <stdio.h>

int	main(void)
{
	char	*src = "tu crois vrm que la terre est ronde";
	printf("%s", ft_strdup(src));
	return (0);
}

