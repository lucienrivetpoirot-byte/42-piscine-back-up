/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 10:13:40 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/20 18:16:01 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	tracker1;
	int	tracker2;

	tracker1 = 0;
	tracker2 = 0;
	while (dest[tracker1] != '\0')
		tracker1++;
	while (src[tracker2] != '\0')
	{
		dest[tracker1 + tracker2] = src[tracker2];
		tracker2++;
	}
	dest[tracker1 + tracker2] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "je suis";
	char	src[] = " ton pere";

	__builtin_printf("%s", ft_strcat(dest, src));
}
*/
