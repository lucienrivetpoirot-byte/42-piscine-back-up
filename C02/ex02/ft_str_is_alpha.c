/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 08:42:53 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/18 18:12:10 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		if ((str[tracker] >= 'a' && str[tracker] <= 'z')
			|| (str[tracker] >= 'A' && str[tracker] <= 'Z'))
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
	char	test1[] = "AlPhAbEt";
	printf("%d",ft_str_is_alpha(test1));	
}
*/
