/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgenin <jgenin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:09:39 by jgenin            #+#    #+#             */
/*   Updated: 2026/07/26 12:35:10 by jgenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_tab(char **board, int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			board[row][col] = '0';
			col++;
		}
		row++;
	}
}

void	ft_display_digits(char **board, int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			write(1, &board[row][col], 1);
			col++;
			if (col != size)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		row++;
	}
}

int	ft_is_correct(char **board, int *pos, int size, char value)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < size)
	{
		if (board[row][pos[1]] == value)
			return (0);
		row++;
	}
	while (col < size)
	{
		if (board[pos[0]][col] == value)
			return (0);
		col++;
	}
	board[pos[0]][pos[1]] = value;
	return (1);
}
