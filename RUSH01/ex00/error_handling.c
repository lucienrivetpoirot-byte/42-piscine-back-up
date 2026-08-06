/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgenin <jgenin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:01:48 by jgenin            #+#    #+#             */
/*   Updated: 2026/07/26 23:35:31 by jgenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Error handling
int	ft_error(int argc, int size)
{
	if (argc == -1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!size)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
