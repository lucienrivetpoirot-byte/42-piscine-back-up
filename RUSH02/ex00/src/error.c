/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 11:26:30 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/02 14:07:56 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/**
 * @brief Validate the program's command-line arguments.
 *
 * @param argc Argument count.
 * @param argv Argument values; argv[1] must start with a digit.
 * @return 0 if the arguments are valid, 1 otherwise (an error message is
 * printed to stderr).
 */
int	ft_error(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (*argv[1 + (argc == 3)] < '0' || *argv[1 + (argc == 3)] > '9')
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
