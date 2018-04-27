#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/11 15:27:53 by azaporoz          #+#    #+#              #
#    Updated: 2018/04/27 12:54:44 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = main.c \
			ft_x_left.c \
			ft_x_right.c \
			ft_y_down.c \
			ft_y_up.c \
			ft_check_all.c \
			ft_list_push_back.c \
			ft_lstnew_pos.c \
			ft_create_map.c \
			ft_map_filler.c \
			ft_check_int.c \
			ft_solver.c \
			ft_mover.c \
			ft_valid_catch.c \
			ft_raise_err.c \
			ft_last_terminos.c

HEADER = fillit.h
OBJECTS = $(SOURCE:.c=.o)
FILLLIB = fillit.a
LIBFT = include/libft.a
NAME = fillit
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT)
	$(CC) $(CFLAGC) -c $(SOURCE) -I $(HEADER)
	@ar rc $(FILLLIB) $(OBJECTS)
	@$(CC) $(FLAGC) -o $(NAME) $(FILLLIB) $(LIBFT)

$(LIBFT):
	@make -C ./include

clean:
	@$(RM) $(OBJECTS)
	@make clean -C ./include

fclean: clean
	@$(RM) $(FILLLIB) $(NAME)
	@make fclean -C ./include

re: fclean all
