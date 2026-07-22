/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:42:37 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/18 18:59:35 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		if (str[tracker] >= 'a' && str[tracker] <= 'z')
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
        char    test1[] = "alphabet";
        printf("%d", ft_str_is_lowercase(test1));
}
*/
