/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:08:33 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/22 09:17:00 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = nb;
	while (nb != 1)
	{
		n *= (nb -1);
		nb--;
	}
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
}
*/
