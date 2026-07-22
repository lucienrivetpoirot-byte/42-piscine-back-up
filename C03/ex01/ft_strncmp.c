/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:17:25 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 13:46:04 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	tracker;

	tracker = 0;
	if (n == 0)
		return (0);
	while ((tracker < n - 1 && s1[tracker] == s2[tracker])
		&& (s1[tracker] != '\0' && s2[tracker] != '\0'))
		tracker++;
	return (s1[tracker] - s2[tracker]);
}
/*
#include <stdio.h>
int     main(void)
{
        char s1[] = "salep";
        char s2[] = "salem";
        printf("%i", ft_strncmp(s1, s2, 3));
}
*/
