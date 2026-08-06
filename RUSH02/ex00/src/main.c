/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:28:47 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/02 15:43:32 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	process(t_stock_dict *dicts, char *str, int len)
{
	char	**fragments;

	fragments = ft_fragment(str, 3);
	str = parse_nb(fragments, dicts, len);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	ft_free_str(fragments, get_scale(fragments));
	ft_free_dicts(dicts, len);
	free(str);
	return ;
}

int	main(int c, char **v)
{
	t_stock_dict	*dicts;
	char			*str;
	int				str_len;
	int				len;

	if (ft_error(c, v))
		return (0);
	if (!ft_check_nb(v[1 + (c == 3)]))
		return (0);
	if (c == 2)
		dicts = read_file("numbers.dict");
	else
		dicts = read_file(v[1]);
	if (!dicts)
		return (0);
	str = v[1 + (c == 3)];
	str_len = ft_strlen(str);
	len = get_dict_len(dicts);
	if (dicts[len - 1].size <= (str_len - 3))
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	process(dicts, str, len);
	return (0);
}
