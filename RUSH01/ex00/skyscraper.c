/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgenin <jgenin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 08:32:57 by qhubert           #+#    #+#             */
/*   Updated: 2026/07/26 23:29:30 by jgenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_correct(char **board, int *pos, int size, char value);
int		ft_count_words(char *argv);
int		ft_skyscraper(char **board, int *pos, int size, char *nbs);
int		ft_is_ordered(char **board, char *nbs, int *pos, int size);
char	*ft_position(int row, int col, int size, char *argv);
void	ft_display_digits(char **board, int size);
int		ft_check_tab(char **board);

// Go to the next position on the board
int	ft_change_pos(int *pos, int size)
{
	if (pos[0] == size - 1)
	{
		pos[0] = 0;
		pos[1]++;
	}
	else
		pos[0]++;
	return (0);
}

// Go back to the previous position on the board
int	ft_restore_pos(int *pos, int size)
{
	if (pos[0] == 0)
	{
		pos[0] = size - 1;
		pos[1]--;
	}
	else
		pos[0]--;
	return (0);
}

int	ff(int *pos, char **board, int size, char *j[2])
{
	ft_change_pos(pos, size);
	if (ft_skyscraper(board, pos, size, j[1]))
	{
		free(j[0]);
		return (1);
	}
	ft_restore_pos(pos, size);
	return (0);
}

// Core of the backtracking
int	ft_skyscraper(char **board, int *pos, int size, char *nbs)
{
	char	*clues;
	int		i;
	char	*j[2];

	if (pos[1] == size)
		return (1);
	i = '1';
	clues = ft_position(pos[0], pos[1], size, nbs);
	if (!clues)
		return (0);
	while (i <= '0' + size)
	{
		if (ft_is_correct(board, pos, size, i)
			&& ft_is_ordered(board, clues, pos, size))
		{
			j[0] = clues;
			j[1] = nbs;
			if (ff(pos, board, size, j))
				return (1);
		}
		board[pos[0]][pos[1]] = '0';
		i++;
	}
	free(clues);
	return (0);
}
