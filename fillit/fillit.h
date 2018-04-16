/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 14:27:57 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/16 20:18:43 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define TETRA_SIZE 21
# include "libft.h"
# include <unistd.h>
# include <fcntl.h>

#include <stdio.h>

void	ft_pos_recorder(t_list *src);
void	ft_solver(t_list **src);
int		ft_x_left(t_list *pos);
int		ft_x_right(t_list *pos);
int		ft_y_down(t_list *pos);
int		ft_y_up(t_list *pos);
void	ft_rewrite(t_list *lst);
#endif
