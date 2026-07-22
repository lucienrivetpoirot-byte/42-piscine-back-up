/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:18:46 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 09:15:24 by lrivet-p         ###   ########lyon.fr   */
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
