/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:36:39 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/22 08:58:15 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (2);
	while (n * n <= nb)
	{
		if (nb % n == 0)
			nb++;
		else
			n++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(-23));
}
*/
