/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 08:17:48 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/19 08:22:19 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x, int c)
{
	while (c <= x)
	{
		if (c == 1)
		{
			ft_putchar('o');
		}
		else if (c < x && c > 1)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('o');
		}
		c++;
	}
	ft_putchar('\n');
}

void	middle_line(int x, int c)
{
	while (c <= x)
	{
		if (c == 1)
		{
			ft_putchar('|');
		}
		else if (c < x && c > 1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('|');
		}
		c++;
	}
	ft_putchar('\n');
}

void	last_line(int x, int c)
{
	while (c <= x)
	{
		if (c == 1)
		{
			ft_putchar('o');
		}
		else if (c < x && c > 1)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('o');
		}
		c++;
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	c = 1;
	if ((x <= 0) || (y <= 0))
	{
		write (1, "Negative numbers or 0 are forbidden.", 36);
		return (0);
	}
	while (l <= y)
	{
		if (l == 1)
			first_line(x, c);
		else if (l > 1 && l < y)
			middle_line(x, c);
		else if (l == y && l != 1)
			last_line(x, c);
		l++;
	}
	return (1);
}
