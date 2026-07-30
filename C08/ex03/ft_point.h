/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 18:41:25 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/29 10:57:02 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct t_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif
