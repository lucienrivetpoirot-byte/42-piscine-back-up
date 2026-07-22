/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:36:50 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/18 18:49:55 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		if (str[tracker] >= '0' && str[tracker] <= '9')
			tracker++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main (void)
{
        char    test1[] = "3434";
        printf("%d",ft_str_is_numeric(test1));
}
*/
