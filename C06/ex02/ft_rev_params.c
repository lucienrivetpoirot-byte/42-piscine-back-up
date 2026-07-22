/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:11:12 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/22 14:38:45 by lrivet-p         ###   ########lyon.fr   */
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
	argc--;
	while (argc > 0)
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
