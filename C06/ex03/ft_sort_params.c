/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:11:27 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/23 12:57:40 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	tracker;

	tracker = 0;
	while ((s1[tracker] == s2[tracker])
		&& (s1[tracker] != '\0' && s2[tracker] != '\0'))
	{
		tracker++;
	}
	return (s1[tracker] - s2[tracker]);
}

void	ft_putstr(char *str)
{
	int	tracker;

	tracker = 0;
	while (str[tracker] != '\0')
	{
		write(1, &str[tracker], 1);
		tracker++;
	}
}

void	poop_house(int argc, char *argv[])
{
	int	tracker;

	tracker = 1;
	while (tracker < argc)
	{
		ft_putstr(argv[tracker]);
		write(1, "\n", 1);
		tracker++;
	}
}

int	main(int argc, char *argv[])
{
	int		tracker1;
	int		tracker2;
	char	*temp;

	tracker1 = 1;
	while (tracker1 < argc)
	{
		tracker2 = 1;
		while (tracker2 < argc)
		{
			if (ft_strcmp(argv[tracker1], argv[tracker2]) < 0)
			{
				temp = argv[tracker1];
				argv[tracker1] = argv[tracker2];
				argv[tracker2] = temp;
			}
			tracker2++;
		}
		tracker1++;
	}
	poop_house(argc, argv);
	return (0);
}
