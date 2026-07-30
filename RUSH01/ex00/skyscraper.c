/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 08:32:57 by qhubert           #+#    #+#             */
/*   Updated: 2026/07/26 08:50:09 by qhubert          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



int	ft_is_correct(char **board, int *pos, int size, char value);
int	ft_count_words(char *argv);
int	ft_count_ordered(char *col, char *row, char *digits, int size);
int	ft_skyscraper(char **board, int *pos, int size, char *nbs);

int	ft_is_ordered(char **board, int *pos, char *digits)
{
	char	row[10];
	char	col[10];
	int		size;
	int		i;

	size = ft_count_words(digits);
	row[0] = board[pos[0]][pos[1]];
	i = 1;
	while (i < size)
	{
		row[i] = board[pos[0]][i];
		i++;
	}
	col[0] = board[pos[0]][pos[1]];
	i = 1;
	while (i < size)
	{
		col[i] = board[i][pos[1]];
		i++;
	}
	if (ft_count_ordered(col, row, digits, size))
		return (1);
	return (0);
}

int	ft_change_pos(int *pos, int size)
{
	if (pos[0] >= size)
	{
		pos[0] = 0;
		pos[1]++;
	}
	else
		pos[0]++;
	return (0);
}

int	ft_restore_pos(int *pos, int size)
{
	if (pos[0] == 0)
	{
		pos[1]--;
		pos[0] = size - 1;
	}
	else
		pos[0]--;
	return (0);
}

int	ft_try_digit(char **board, int *pos, int size, char *nbs)
{
	int	i;

	i = '1';
	while (i <= '0' + size)
	{
		if (ft_is_correct(board, pos, size, i)
				&& ft_is_ordered(board, pos, nbs))
		{
			ft_change_pos(pos, size);
			if (ft_skyscraper(board, pos, size, nbs))
				return (1);
			ft_restore_pos(pos, size);
			board[pos[0]][pos[1]] = '0';
		}
		i++;
	}
	return (0);
}

int	ft_skyscraper(char **board, int *pos, int size, char *nbs)
{
	if (pos[1] == size)
		return (1);
	return (ft_try_digit(board, pos, size, nbs));
}

// ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
