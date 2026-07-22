/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 18:07:46 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/17 10:34:36 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	tracker;

	tracker = 0;
	while (src[tracker] != '\0' && tracker < n)
	{
		dest[tracker] = src[tracker];
		tracker++;
	}
	while (tracker < n)
	{
		dest[tracker] = '\0';
		tracker++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "jesuistonpere";
	char dest[] = "tuestunstabil";
	char *temp = ft_strncpy(dest, src, 3);
	printf("%s,%s,%s", src, dest, temp);

}
*/
