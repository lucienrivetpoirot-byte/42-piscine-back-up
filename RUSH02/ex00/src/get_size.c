/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 10:48:07 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/02 14:07:15 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * @brief Check that a string contains only digits.
 *
 * @param str String to check.
 * @return The string's length if valid, -1 if a non-digit is found.
 */
int	ft_check_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (i);
}

/**
 * @brief Count the elements of a NULL-terminated string array.
 *
 * @param str NULL-terminated array of strings.
 * @return Number of elements.
 */
int	get_scale(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int		sign;
	long	nb;
	char	temp;

	nb = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		temp = '0' - 1;
		while (++temp < *str)
			nb += 1;
		nb *= 10;
		str++;
	}
	nb /= 10;
	nb *= sign;
	return (nb);
}

char	*ft_itoa(int n, char *buf)
{
	char	tmp[4];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (n == 0)
	{
		buf = ft_strcpy(buf, "0");
		return (buf);
	}
	while (n > 0)
	{
		tmp[j++] = '0' + n % 10;
		n /= 10;
	}
	while (j > 0)
		buf[i++] = tmp[--j];
	buf[i] = 0;
	return (buf);
}
