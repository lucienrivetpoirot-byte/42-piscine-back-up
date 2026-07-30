/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:13:38 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/28 15:45:28 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	tracker;

	tracker = 0;
	if (min >= max)
		return (NULL);
	result = malloc ((max - min + 1) * sizeof (int));
	while (tracker < (max - min))
	{
		result[tracker] = min + tracker;
		tracker++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int min;
	int	max;
	int tracker;
	int *board;

	max = 20;
	min = 0;
	board = NULL;
	board = ft_range(min, max);
	tracker = 0;
	while(tracker < (max- min))
	{
		printf("%d,", board[tracker]);
		tracker++;
	}
	return (0);
}

