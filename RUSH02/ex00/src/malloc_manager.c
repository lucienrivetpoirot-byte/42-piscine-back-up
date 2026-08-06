/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:31:17 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/02 14:12:13 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/**
 * @brief Free an array of strings.
 *
 * If `i` is -1, `str` is treated as a full NULL-terminated array and every
 * entry is freed. Otherwise `i` is the index of the element whose
 * allocation just failed: every entry strictly before it (0 to i - 1) is
 * freed instead, then the array itself is freed.
 *
 * @param str Array of allocated strings (or partially allocated array).
 * @param i   -1 to free the whole NULL-terminated array, or the index of
 * the first non-allocated element otherwise.
 * @return Always NULL, so callers can `return (ft_free_str(...))` directly.
 */
void	*ft_free_str(char **str, int i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (NULL);
}

/**
 * @brief Free a t_stock_dict array and all the strings it owns.
 *
 * `i` is the number of valid entries in `dicts` (i.e. dicts[i] is the
 * NULL-terminated sentinel and must not be freed). Entries 0 to i - 1 are
 * freed, then the array itself.
 *
 * @param dicts Array of dictionary entries.
 * @param i     Number of valid entries in `dicts`.
 * @return Always NULL, so callers can `return (ft_free_dicts(...))` directly.
 */
void	*ft_free_dicts(t_stock_dict *dicts, int i)
{
	if (!dicts)
		return (NULL);
	i--;
	while (i >= 0)
	{
		free(dicts[i].number);
		free(dicts[i].value);
		i--;
	}
	free(dicts);
	return (NULL);
}
