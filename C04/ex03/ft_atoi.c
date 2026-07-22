/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 12:59:50 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/22 12:19:57 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	tracker;
	int	signe;
	int	memory;

	memory = 0;
	signe = 1;
	tracker = 0;
	while ((str[tracker] >= '\t' && str[tracker] <= '\r')
		|| (str[tracker] == ' '))
		tracker++;
	while (str[tracker] == '+' || str[tracker] == '-')
	{
		if (str[tracker] == '-')
			signe = signe * -1;
		tracker++;
	}
	while (str[tracker] >= '0' && str[tracker] <= '9')
	{
		memory = memory * 10;
		memory = memory + (str[tracker] - '0');
		tracker++;
	}
	return (memory * signe);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = " \t    +----+---+---++-676767abcd67abcdes";
	printf("%i", ft_atoi(str));
}
*/
