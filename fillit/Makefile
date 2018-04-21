#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/11 15:27:53 by azaporoz          #+#    #+#              #
#    Updated: 2018/04/21 19:31:24 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

all:
	@gcc -Wall -Wextra -Werror -c ft_x_left.c ft_x_right.c ft_y_down.c ft_y_up.c \
								 ft_pos_recorder.c ft_rewrite.c ft_check_current.c ft_list_push_back.c ft_lstnew_pos.c ft_create_map.c ft_map_filler.c -I fillit.h
	@ar rc fillit.a *.o

main:
	gcc -Wall -Wextra -Werror -o main main.c fillit.a libft.a

clean:
	@rm -f *.o

fclean: clean
	@rm -f fillit.a

re: fclean all