/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:50:59 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/18 19:07:04 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		if (str[tracker] >= ' ' && str[tracker] <= '~')
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
        char    test1[] = "AlPhAbEt";
        printf("%d",ft_str_is_printable(test1));
}
*/
