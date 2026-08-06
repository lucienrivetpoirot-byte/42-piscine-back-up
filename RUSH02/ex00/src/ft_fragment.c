/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fragment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:59:22 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 14:16:17 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/**
 * @brief Copy up to `n` characters from `src` into `dest`, null-terminated.
 *
 * @param dest Destination buffer.
 * @param src  Source string.
 * @param n    Maximum number of characters to copy.
 * @return Pointer to `dest`.
 */
char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * @brief Split a numeric string into groups of 3 digits (thousands groups).
 *
 * The first element may hold fewer than 3 digits (the remainder of the
 * division of the string length by 3).
 *
 * @param str Numeric string to fragment.
 * @return NULL-terminated array of newly allocated 3-digit (or less)
 * chunks, or NULL on allocation failure.
 */
char	**ft_fragment(char *str, int size)
{
	char	**split_str;
	int		len;
	int		i;

	len = ft_strlen(str);
	split_str = malloc(sizeof(char *) * (len / size + 2));
	if (!split_str)
		return (NULL);
	split_str[0] = malloc(sizeof(char) * (len % size + 1));
	if (!split_str[0])
		return (ft_free_str(split_str, 1));
	ft_strncpy(split_str[0], str, len % size);
	i = 1;
	str += len % size;
	while (*str)
	{
		split_str[i] = malloc(sizeof(char) * (size + 1));
		if (!split_str[i])
			return (ft_free_str(split_str, i));
		ft_strncpy(split_str[i++], str, size);
		str += size;
	}
	split_str[i] = NULL;
	return (split_str);
}
