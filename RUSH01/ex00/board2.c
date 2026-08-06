/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgenin <jgenin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:08:27 by jgenin            #+#    #+#             */
/*   Updated: 2026/07/26 23:02:02 by jgenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Count the length of a side by dividing the number of the digit by four
int	ft_count_words2(char *argv, int *i, int *count)
{
	while (argv[*i])
	{
		if (argv[*i] < '1' || argv[*i] > '9')
			return (0);
		(*count)++;
		(*i)++;
		if (!argv[*i])
			break ;
		if (argv[*i] != ' ')
			return (0);
		(*i)++;
	}
	return (1);
}

// Count the length of a side by dividing the number of the digit by four
int	ft_count_words(char *argv)
{
	int		i;
	int		count;
	int		size;

	i = 0;
	count = 0;
	if (!(ft_count_words2(argv, &i, &count)))
		return (0);
	if (count % 4 != 0)
		return (0);
	size = count / 4;
	i = 0;
	while (argv[i])
	{
		if (argv[i] != ' ' && argv[i] > '0' + size)
			return (0);
		i++;
	}
	return (size);
}

// Return the number of skyscraper we can see side by side
char	*ft_position(int row, int col, int size, char *argv)
{
	char	*pos;

	pos = malloc(4);
	if (!pos)
		return (0);
	pos[0] = argv[(size + col) * 2];
	pos[1] = argv[col * 2];
	pos[2] = argv[(3 * size + row) * 2];
	pos[3] = argv[(2 * size + row) * 2];
	return (pos);
}

//mallocs the exact amount of bytes necessary
int	ft_malloc_board(char **board, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		board[i] = malloc(size);
		if (!board[i])
			return (1);
		i++;
	}
	return (0);
}
