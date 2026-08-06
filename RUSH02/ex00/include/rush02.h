/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 08:51:02 by qhubert           #+#    #+#             */
/*   Updated: 2026/08/02 14:16:40 by qhubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stock_dict
{
	int			size;
	char		*number;
	char		*value;
}				t_stock_dict;

int				ft_strlen(char *argv);
int				ft_check_nb(char *argv);
int				get_scale(char **argv);
int				ft_atoi(char *str);
char			*ft_itoa(int n, char *buf);
char			*build_scale(int scale);
int				convert_group(int nb, t_stock_dict *dicts, char **words, int i);

void			init_values(int *a, int *b, int val);
int				ft_error(int argc, char *argv[]);

void			*ft_free_str(char **str, int i);
void			*ft_free_dicts(t_stock_dict *dicts, int i);
char			**ft_fragment(char *str, int size);
char			**ft_split(char *str, char *charset);
char			*ft_strncpy(char *dest, char *src, int n);
char			*ft_strjoin(int size, char **strs, char *sep);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);

char			*realloc_buf(char *buf, int n, int *cap);
char			*get_line(int fd);
char			**create_tab(int fd, int len);
int				get_nb_len(int fd);

t_stock_dict	*read_file(char *filename);

t_stock_dict	*ft_strs_to_tab(int len, char **strs);
t_stock_dict	*sort_dicts(t_stock_dict *dicts);
t_stock_dict	*find_entry(t_stock_dict *dicts, char *val, int len);

char			*parse_nb(char **fragments, t_stock_dict *dicts, int len);
int				get_dict_len(t_stock_dict *dicts);

#endif
