/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 08:33:07 by qhubert           #+#    #+#             */
/*   Updated: 2026/07/26 10:12:14 by qhubert          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_position(int row, int col, int size, char *argv);
int	ft_skyscraper(char **board, int *pos, int size, char *nbs);
int	ft_count_char(char c, char *str);

int	ft_check_c(int *counter, int nb_0, char pos, char *str)
{
	int	is_good;
	int	i;
	int	size;
	char	max;

	max = '0';
	size = 0;
	while (str[size])
		size++;
	i = 1;
	while (i < size)
	{
		if (str[i] > max)
		{
			max = str[i];
			(*counter)++;
		}
		i++;
	}
	is_good = *counter == (pos - nb_0 + 1);
	*counter = 0;
	return (is_good);
}

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

int	ft_count_ordered(char *col, char *row, char *digits, int size)
{
	char	*pos;
	int		c_c_0;
	int		r_c_0;
	int		count;

	c_c_0 = ft_count_char('0', col);
	r_c_0 = ft_count_char('0', row);
	pos = ft_position(col[0], row[0], size, digits);
	if (!pos)
		return (0);
	count = 0;
	if (ft_check_c(&count, c_c_0, pos[0], col)
			&& ft_check_c(&count, c_c_0, pos[1], ft_rv(col, size))
			&& ft_check_c(&count, r_c_0, pos[2], row)
			&& ft_check_c(&count, r_c_0, pos[3], ft_rv(row, size)))
	{
		free(pos);
		return (1);
	}
	free(pos);
	return (0);
}

int	ft_count_char(char c, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str++ == c)
			i++;
	}
	return (i);
}
