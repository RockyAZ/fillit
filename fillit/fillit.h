/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 14:27:57 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/19 18:10:07 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define TETRA_SIZE 21
# include <unistd.h>
# include <fcntl.h>
# include "include/libft.h"
#include <stdio.h>

typedef struct		s_pos
{
	void			*content;
	size_t			content_size;
	int				x[4];
	int				y[4];
	char			c;
	struct s_pos	*next;
}					t_pos;

typedef struct		s_res
{
	char			*map;
}					t_res;

int					ft_lstsize(t_pos *begin_list);
void				ft_list_push_back(t_pos **begin_list, void *data, int size, char c);
t_pos				*ft_lstnew_pos(void const *content, size_t content_size, char c);
t_res				*ft_create_map(t_res **map, int i, int pos);
t_res				*ft_map_filler(t_res *link, int i, int pos);
int					ft_check_int(t_pos *beg, int to);


void	ft_pos_recorder(t_pos *src);
void	ft_solver(t_pos *src);
int		ft_x_left(t_pos *pos, int size);
void	ft_x_right(t_pos *pos);
void	ft_y_down(t_pos *pos);
int		ft_y_up(t_pos *pos, int size);
void	ft_rewrite(t_pos *lst, t_pos *pos);
int		ft_check_next(t_pos *first);
int		ft_check_all(t_pos **first);
int     ft_check_current(t_pos **beg, t_pos *cur);

int	ft_lstsize(t_pos *begin_list);
#endif
