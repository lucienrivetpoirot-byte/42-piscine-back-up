/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgenin <jgenin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:09:37 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/26 23:36:27 by jgenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_init_tab(char **board, int size);
int		ft_skyscraper(char **board, int *pos, int size, char *nbs);
void	ft_display_digits(char **board, int size);
int		ft_error(int argc, int size);
void	ft_free_board(char **board, int size);
int		ft_count_words(char *argv);
int		ft_count_words2(char *argv, int *i, int *count);
char	*ft_position(int row, int col, int size, char *argv);
int		ft_malloc_board(char **board, int size);
void	count_visible(int *i, int size, char *line, int *zeros);

int	main(int argc, char *argv[])
{
	int		size;
	char	**board;
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
	if (ft_malloc_board(board, size))
		return (1);
	ft_init_tab(board, size);
	if (ft_skyscraper(board, pos, size, argv[1]))
		ft_display_digits(board, size);
	else if (ft_error(-1, 0))
		return (1);
	ft_free_board(board, size);
	return (0);
}
