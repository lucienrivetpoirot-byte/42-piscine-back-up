/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:07:51 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/16 16:32:43 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
int main (void)
{
	char dest[] = "gtfm";
		
	char src[] = "glhf";
	ft_strcpy(dest, src);
	printf("%s,%s", dest, src);
}
*/
