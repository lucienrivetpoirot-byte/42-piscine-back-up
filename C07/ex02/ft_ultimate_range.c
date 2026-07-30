/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:39:22 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/28 13:02:07 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tracker;

	*range = malloc((max - min + 1) * sizeof (int));
	tracker = 0;
	if (min >= max)
		return (-1);
	while (tracker < (max - min))
	{
		(*range)[tracker] = min + tracker;
		tracker++;
	}
	return (max - min);
}
/*
#include <stdio.h>

int main(void)
{
	int min;
	int	max;
	int *range;

	max = 67;
	range = NULL;
	min = 1;   
    __builtin_printf("%d\n", ft_ultimate_range(&range, min, max));
}
*/
