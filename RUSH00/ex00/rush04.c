/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 11:15:54 by clrenaul          #+#    #+#             */
/*   Updated: 2026/07/18 18:52:34 by clrenaul         ###   ########lyon.fr   */
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
			ft_putchar('A');
		}
		else if (c < x && c > 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
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
			ft_putchar('B');
		}
		else if (c < x && c > 1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
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
			ft_putchar('C');
		}
		else if (c < x && c > 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('A');
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
