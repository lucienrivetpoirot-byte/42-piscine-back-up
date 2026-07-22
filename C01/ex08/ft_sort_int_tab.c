/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:22:40 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 19:38:11 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tracker1;
	int	tracker2;
	int	temp;

	tracker1 = 0;
	while (tracker1 < size)
	{
		tracker2 = tracker1 + 1;
		while (tracker2 < size)
		{
			if (tab[tracker1] > tab[tracker2])
			{
				temp = tab[tracker1];
				tab[tracker1] = tab[tracker2];
				tab[tracker2] = temp;
			}
			tracker2++;
		}
		tracker1++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {5,-5, 36, 1, 2, 6};
	int size = 6;
	int tracker = 0;

	ft_sort_int_tab(tab, size);
	while (tracker < size)
		printf("%d,", tab[tracker++]);
	return (0);
}
*/
