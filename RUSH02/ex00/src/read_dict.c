/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 08:47:06 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 15:52:14 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/**
 * @brief Open, read, and parse a dictionary file into a sorted-ready array.
 *
 * @param filename Path to the dictionary file.
 * @return Newly allocated dictionary array, or NULL if the file couldn't
 * be opened or a subsequent allocation failed.
 */
t_stock_dict	*read_file(char *filename)
{
	int				fd;
	int				len;
	t_stock_dict	*dicts;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	len = get_nb_len(fd);
	close(fd);
	fd = open(filename, O_RDONLY);
	dicts = ft_strs_to_tab(len, create_tab(fd, len));
	close(fd);
	dicts = sort_dicts(dicts);
	return (dicts);
}
