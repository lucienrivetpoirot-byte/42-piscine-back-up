/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:41:03 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/16 10:18:39 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	*k;

	k = "zyxwvutsrqponmlkjihgfedcba";
	write (1, k, 26);
}
/*
int     main(void)
{
        ft_print_reverse_alphabet();
        return (0);
}
*/
