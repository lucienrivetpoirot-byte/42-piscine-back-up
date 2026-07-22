/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 11:17:57 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/19 13:54:31 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	tracker1;
	unsigned int	tracker2;

	tracker1 = 0;
	tracker2 = 0;
	while (dest[tracker1] != '\0')
		tracker1++;
	while (src[tracker2] != '\0' && tracker2 < nb)
	{
		dest[tracker1 + tracker2] = src[tracker2];
		tracker2++;
	}
	dest[tracker1 + tracker2] = '\0';
	return (dest);
}
/*
int     main(void)
{
        char    dest[] = "je suis";
        char    src[] = "ton pere";

        __builtin_printf("%s", ft_strncat(dest, src, 3));
}
*/
