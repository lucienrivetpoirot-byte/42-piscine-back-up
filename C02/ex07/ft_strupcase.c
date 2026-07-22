/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 13:01:00 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/18 19:11:36 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		if (str[tracker] >= 'a' && str[tracker] <= 'z')
			str[tracker] = str[tracker] - 32;
		tracker++;
	}
	return (str);
}
/*
#include <stdio.h>
int main (void)
{
        char    test1[] = "AlPhAbEt";
        printf("%s",ft_strupcase(test1));
}
*/
