/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 09:50:58 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/06 09:59:34 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	tracker;

	tracker = 0;
	while (par[tracker].str != 0)
	{
		ft_putstr(par[tracker].str);
		write(1, "\n", 1);
		ft_putnbr(par[tracker].size);
		write(1, "\n", 1);
		ft_putstr(par[tracker].copy);
		write(1, "\n", 1);
		tracker++;
	}
}
