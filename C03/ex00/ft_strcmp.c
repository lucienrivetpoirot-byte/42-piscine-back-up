/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 13:56:48 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/19 09:32:26 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	tracker;

	tracker = 0;
	while ((s1[tracker] == s2[tracker])
		&& (s1[tracker] != '\0' && s2[tracker] != '\0'))
	{
		tracker++;
	}
	return (s1[tracker] - s2[tracker]);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "salem";
	char s2[] = "salemp";
	printf("%i", ft_strcmp(s1, s2));
}
*/
