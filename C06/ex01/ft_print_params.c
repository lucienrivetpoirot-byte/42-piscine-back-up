/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:23:05 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/22 14:09:53 by lrivet-p         ###   ########lyon.fr   */
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

int	main(int argc, char *argv[])
{
	int	tracker;

	tracker = 1;
	while (tracker < argc)
	{
		ft_putstr(argv[tracker]);
		write(1, "\n", 1);
		tracker++;
	}
	return (1);
}
