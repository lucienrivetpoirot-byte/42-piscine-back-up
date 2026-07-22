/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 13:59:45 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 18:14:35 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	tracker1;
	int	tracker2;

	tracker1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[tracker1] != '\0')
	{
		tracker2 = 0;
		while (str[tracker1 + tracker2] == to_find[tracker2]
			&& to_find[tracker2] != '\0')
		{
			tracker2++;
		}
		if (to_find[tracker2] == '\0')
			return (&str[tracker1]);
		tracker1++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "I yo you";
	char to_find[] = "you";
	char *result;
	result = ft_strstr(str, to_find);
	printf("%s", result);
}
*/
