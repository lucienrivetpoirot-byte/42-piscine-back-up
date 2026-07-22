/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:22:24 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/22 09:13:22 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while ((n * n) <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
#include <stdio.h>

int main (void)
{
        printf("%d", ft_sqrt(63));
}
*/
