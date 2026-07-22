/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:06:38 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 14:06:46 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		write(1, &str[tracker], 1);
		tracker++;
	}
}
/*
int	main(void)
{
	ft_putstr("ellllll primo");
}
*/
