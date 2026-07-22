/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:48:41 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/18 19:02:48 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		if (str[tracker] >= 'A' && str[tracker] <= 'Z')
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
        char    test1[] = "ALPHABET";
        printf("%d",ft_str_is_uppercase(test1));
}
*/
