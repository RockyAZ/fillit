#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/11 15:27:53 by azaporoz          #+#    #+#              #
#    Updated: 2018/04/25 14:18:22 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_x_left.c \
			ft_x_right.c \
			ft_y_down.c \
			ft_y_up.c \
			ft_pos_recorder.c \
			ft_check_all.c \
			ft_list_push_back.c \
			ft_lstnew_pos.c \
			ft_create_map.c \
			ft_map_filler.c \
			ft_check_int.c \
			ft_solver.c \
			ft_mover.c

HEADER = fillit.h
OBJECTS = $(SOURCE:.c=.o)
NAME = fillit.a
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGC) -c $(SOURCE) -I $(HEADER)
	ar rc $(NAME) $(OBJECTS)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all