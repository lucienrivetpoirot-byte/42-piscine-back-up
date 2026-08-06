/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicts_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 08:10:13 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 15:51:54 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/**
 * @brief Sort a dictionary array by number (selection sort, in place).
 *
 * @param dicts NULL-terminated (via `.number == NULL`) dictionary array.
 * @return Pointer to the same (now sorted) array.
 */
t_stock_dict	*sort_dicts(t_stock_dict *dicts)
{
	int				i;
	int				j;
	int				i_min;
	t_stock_dict	tmp;

	if (!dicts)
		return (NULL);
	i = 0;
	while (dicts[i].number)
	{
		j = i;
		i_min = i;
		while (dicts[j].number)
		{
			if (ft_strcmp(dicts[j].number, dicts[i_min].number) < 0)
				i_min = j;
			j++;
		}
		tmp = dicts[i];
		dicts[i] = dicts[i_min];
		dicts[i_min] = tmp;
		i++;
	}
	return (dicts);
}

/**
 * @brief Binary-search a sorted dictionary array for a given number.
 *
 * @param dicts Sorted dictionary array.
 * @param val   Number (as a string) to look up.
 * @param len   Number of valid entries in `dicts`.
 * @return Pointer to the matching entry, or NULL if not found.
 */
t_stock_dict	*find_entry(t_stock_dict *dicts, char *val, int len)
{
	int	min;
	int	max;
	int	mid;
	int	cmp;

	min = 0;
	max = len - 1;
	while (min <= max)
	{
		mid = (min + max) / 2;
		cmp = ft_strcmp(dicts[mid].number, val);
		if (cmp == 0)
			return (&dicts[mid]);
		if (cmp < 0)
			min = mid + 1;
		else
			max = mid - 1;
	}
	return (NULL);
}
