/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:29:13 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/16 10:19:09 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*k;

	k = "abcdefghijklmnopqrstuvwxyz";
	write (1, k, 26);
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
