/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgenin <jgenin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 08:33:07 by qhubert           #+#    #+#             */
/*   Updated: 2026/07/26 23:30:34 by jgenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_position(int row, int col, int size, char *argv);
void	ft_display_digits(char **board, int size);

// Reverse the string given in parameter
char	*ft_rv(char *str, int size)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}

void	ft_cv_2(char *line, char *max, int comp[3])
{
	if (line[comp[0]] == '0')
		comp[2]++;
	if (line[comp[0]] > *max)
	{
		*max = line[comp[0]];
		comp[1]++;
	}
	comp[0]++;
}

// Count nb of skyscraper visible in a side
// Return 1 if this is a valid number regarding argument
// i = 0, asc = 1, zeros = 2
int	ft_count_visible(char *line, int size, int reverse, char nb)
{
	int		comp[3];
	char	max;

	comp[0] = 0;
	comp[1] = 0;
	comp[2] = 0;
	max = '0';
	if (reverse)
		line = ft_rv(line, size);
	while (comp[0] < size)
		ft_cv_2(line, &max, comp);
	if (reverse)
		ft_rv(line, size);
	if (comp[2] > 0)
		return (nb - '0' >= comp[1]);
	return (nb - '0' == comp[1]);
}

// Return 1 if the position is valid regarding argument
int	ft_is_ordered(char **board, char *nbs, int *pos, int size)
{
	char	col[10];
	int		i;
	int		is_ordered;

	i = -1;
	while (++i < size)
		col[i] = board[i][pos[1]];
	is_ordered = (ft_count_visible(col, size, 1, nbs[0])
			&& ft_count_visible(col, size, 0, nbs[1])
			&& ft_count_visible(board[pos[0]], size, 1, nbs[2])
			&& ft_count_visible(board[pos[0]], size, 0, nbs[3]));
	return (is_ordered);
}
