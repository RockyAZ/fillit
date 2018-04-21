/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:40:23 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/19 17:55:09 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_res	*ft_create_map(t_res **res, int i, int pos);


void	ft_mover(t_pos **cp)
{
	t_pos	*lst;
	int		i;

	lst = *cp;
	while (lst)
	{
		i = 1;
		while (i)
			i = ft_x_left(lst, 1);
		lst = lst->next;
	}
	lst = *cp;
	while (lst)
	{
		i = 1;
		while (i)
			i = ft_y_up(lst, 1);
		lst = lst->next;
	}
}

int		ft_rec_solv(t_pos *cp, t_list *map)
{
	if (ft_check_all(&cp) == 1)
		return (1);

}

void	ft_solver(t_pos **src)
{
	t_res	*map;
	t_pos	*cp;
	int pos;
	int map_c;
	int ad;

	map = NULL;
	pos = 2;
	map_c = 6;
	ad = 6;
	while (ft_rec_solv(cp) != 1)
	{
		map = ft_create_map(&map, map_c, pos);
		map_c += ad;
		ad += 2;
		pos ++;
	}
//	ft_print_res();
}
