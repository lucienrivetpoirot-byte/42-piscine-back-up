/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 13:17:21 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/18 19:16:54 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		if (str[tracker] >= 'A' && str[tracker] <= 'Z')
			str[tracker] = str[tracker] + 32;
		tracker++;
	}
	return (str);
}
/*
#include <stdio.h>
int main (void)
{
        char    test1[] = "AlPhAbEt";
        printf("%s",ft_strlowcase(test1));
}
*/
