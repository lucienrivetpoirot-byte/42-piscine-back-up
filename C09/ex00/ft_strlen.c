/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:08:51 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 14:08:59 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		tracker++;
	}
	return (tracker);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "alphabet";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
}
*/
