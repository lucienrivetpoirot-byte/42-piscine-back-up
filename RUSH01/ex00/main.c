/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgenin <jgenin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:09:37 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/26 11:55:45 by jgenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h> // DELETE ME

void	ft_init_tab(char **board, int size); 
int	ft_skyscraper(char **board, int *pos, int size, char *nbs);
void	ft_display_digits(char **board, int size);
int	ft_count_words(char *argv);
int	ft_error(int argc, int size);
char	*ft_position(int row, int col, int size, char *argv);
void	ft_free_board(char **board, int size);

int	ft_count_words(char *argv)
{
	int		i;
	int		count;
	char	max;

	i = 0;
	count = 0;
	max = '0';
	while (argv[i])
	{
		if ((i & 1) && argv[i] == ' ')
			i++;
		if (argv[i] >= '1' && argv[i] <= '9')
			count++;
		else
			return (0);
		if (argv[i] > max)
			max = argv[i];
		i++;
	}
	if ((count % 4) || ((count % 4) > (max - '0')))
		return (0);
	return (count / 4);
}

int	ft_error(int argc, int size)
{
	if (argc != 2)
	{
		write(1, "WE_ONLY_ACCEPT_TWO_ARGUMENTS\n", 30);
		return (1);
	}
	if (!size)
	{
		write(1, "BOARD_CREATION_IMPOSSIBLE\n", 26);
		return (1);
	}
	return (0);
}

void	ft_free_board(char **board, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(board[i++]);
	free(board);
}

char	*ft_position(int row, int col, int size, char *argv)
{
	char *pos;

	pos = malloc(4);
	if (!pos)
		return (0);
	pos[0] = argv[(((col * size + row) % size) + 0 * size) * 2];
	pos[1] = argv[(((col * size + row) % size) + 1 * size) * 2];
	pos[2] = argv[(((col * size + row) % size) + 2 * size) * 2];
	pos[3] = argv[(((col * size + row) % size) + 3 * size) * 2];
	return (pos);
}


int	main(int argc, char *argv[])
{
	
	int		size;
	char	**board;
	int		i;
	int		pos[2];

	pos[0] = 0;
	pos[1] = 0;	
	if (ft_error(argc, 1))
		return (1);
	size = ft_count_words(argv[1]);
	if (ft_error(2, size))
		return (1);
	board = malloc(size * sizeof(char *));
	if (!board)
		return (1);
	i = 0;
	while (i < size)
	{
		board[i] = malloc(size);
		if (!board[i])
			return (0);
		i++;
	}
	ft_init_tab(board, size);
	printf("size = %d\n", size);
	if (ft_skyscraper(board, pos, size, argv[1]))
		ft_display_digits(board, size);
	else
		write(1, "Error\n", 6);
	ft_free_board(board, size);
	return (0);
}

// ccc main.c board_tests.c skyscraper.c -o rush01 && ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
