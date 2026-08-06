# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhubert <qhubert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/01 16:19:20 by qhubert           #+#    #+#              #
#    Updated: 2026/08/02 14:10:58 by qhubert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	rush-02
CC			=	cc
FLAGS		=	-Wall -Wextra -Werror -g
SRC_DIR		=	src
SOURCES		=	$(addprefix $(SRC_DIR), \
				/ft_split.c				\
				/ft_fragment.c			\
				/ft_strjoin.c			\
				/ft_strcmp.c			\
				/ft_strcpy.c			\
				/dicts_manager.c		\
				/parse_dict.c			\
				/read_dict.c			\
				/malloc_manager.c		\
				/get_size.c				\
				/print_nb.c				\
				/convert_groups.c		\
				/init_values.c			\
				/error.c				\
				/main.c					\
				)

HEADER_DIR	=	include
OBJS		=	$(SOURCES:.c=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	@$(CC) $(FLAGS) -I $(HEADER_DIR) -o $(NAME) $(OBJS)

%.o			:	%.c $(HEADER_DIR)/rush02.h
	@$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

clean		:
	@rm -f $(OBJS)

fclean		:	clean
	@rm -f $(NAME)

re			:	fclean	all

.PHONY:	all	clean	fclean	re