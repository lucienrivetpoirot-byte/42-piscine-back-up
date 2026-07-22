/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 10:57:03 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/16 17:33:05 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main (void)
{
int	mod	=	0;
int	div	=	2;
int     a       =       4;
int     b       =       2;
ft_div_mod(a, b, &mod, &div);
printf("%d, %d", div, mod);
}
*/
