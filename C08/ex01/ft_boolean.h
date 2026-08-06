/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrivet-p <lrivet-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 14:55:34 by lrivet-p          #+#    #+#             */
/*   Updated: 2026/08/02 14:37:54 by lrivet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

# define EVEN(nbr) ((nbr % 2 == 0) ? FALSE : TRUE)

# define ODD_MSG "I have an even number of arguments.\n"

# define EVEN_MSG "I have an odd number of arguments.\n"

# include <unistd.h>

typedef int	t_bool;
#endif
