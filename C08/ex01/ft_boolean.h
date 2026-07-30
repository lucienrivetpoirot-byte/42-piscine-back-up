/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 14:55:34 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/07/28 17:24:55 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define SUCCESS 1

# define EVEN(nbr) ((nbr % 2) ? TRUE : FALSE)

# define ODD_MSG "I have an even number of arguments."

# define EVEN_MSG "I have an odd number of arguments."

# include <unistd.h>

typedef int	t_bool;
#endif
