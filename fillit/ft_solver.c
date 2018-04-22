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

int		is_map(t_pos *cp, int size)
{
	int i;

	i = 4;
	while (cp)
	{
		while (i < 4)
		{
			if (cp->x[i] >= size || cp->y[i] >= size)
				return (0);
			i++;
		}
		cp = cp->next;
	}
	return (1);
}



int		ft_rec_solv(t_pos *cp, t_pos *pos, int size)
{
	if (ft_check_all(&cp) == 1)
		return (1);
	if (!is_map(cp, size))
		return (0);
	if ()
}

void	ft_solver(t_pos *cp)
{
	t_res	*map;
	int size;
	int map_c;
	int ad;
	int bul;

	map = NULL;
	size = 2;
	map_c = 6;
	ad = 6;
	bul = 0;
	ft_mover(&cp);
	while (bul == 0)
	{
		if (bul = ft_rec_solv(cp, cp, size) == 0)
		{
			map = ft_create_map(&map, map_c, size);
			map_c += ad;
			ad += 2;
			size ++;
		}
	}
//	ft_print_res();
}
