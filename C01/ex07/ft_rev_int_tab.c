/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:10:24 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 16:03:39 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tracker;
	int	temp;

	tracker = 0;
	size--;
	while (tracker < size)
	{
		temp = tab[tracker];
		tab[tracker] = tab[size];
		tab[size] = temp;
		size--;
		tracker++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	tracker = 0;

	ft_rev_int_tab(tab, size);
	while (tracker < size)
	{
		printf("%d", tab[tracker]);
		tracker++;
	}	
	return (0);
}
*/
