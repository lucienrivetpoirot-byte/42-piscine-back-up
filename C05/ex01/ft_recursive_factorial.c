/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:34:20 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/21 16:02:55 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (nb);
	else
	{
		nb *= ft_recursive_factorial(nb -1);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(0));
}
*/
