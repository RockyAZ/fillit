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

void	ft_printmap(t_res *map, t_pos *pos)
{
	int		i;
	int		j;
	char	*lst_pos;

	i = 0;
	j = 0;
	while (pos)
	{
		lst_pos = map->map;
		while (*lst_pos != '\0')
		{
			if ((i % 5 == pos->x[j]) && (i / 5 == pos->y[j]))
			{
				*lst_pos = pos->c;
				j++;
			}
			i++;
			lst_pos++;
		}
		j = 0;
		pos = pos->next;
	}
	printf("map :\n%s\n", map->map);
}

void	ft_mover(t_pos *cp, int bul)
{
	int		i;

	i = 1;
	if (bul == 0)
	{
		i = 1;
		while (i)
			i = ft_x_left(cp, 1);
	}
	else
	{
		while (i)
			i = ft_y_up(cp, 1);
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

int		ft_rec_solv(t_pos *beg, t_pos *pos, int size, int to)
{
	int i;

	if (pos == NULL)
		return (1);
	if (!is_map(pos, size))
		return (0);
	if (ft_check_all(&beg) == 1)
		return (1);
	i = 0;
	while (i++ < size)
	{
		if (ft_rec_solv(beg, pos->next, size, to + 1) == 0)
		{
			if (ft_y_down(pos, size) == 0)
			{
				ft_mover(pos, 1);
				if (ft_x_right(pos, size) == 0)
				{
					ft_mover(pos, 0);
					return (0);
				}
			}
		}
	}
	if ((ft_check_all(&beg) == 1))
		return (1);
	return (0);
}

void	ft_solver(t_pos *cp)
{
	t_res	*map;
	int size;
	int map_c;
	int ad;
	int bul;

t_pos *cpp = cp;


	map = NULL;
	size = 2;
	map_c = 6;
	ad = 6;
	bul = 0;



	while (cpp)
	{
		ft_mover(cpp, 0);
		ft_mover(cpp , 1);
		cpp = cpp->next;
	}
cpp = cp;
int i;
	while (cpp != NULL)
	{
		printf("START:\n%s\n", cpp->content);
		ft_rewrite(cpp, cpp);
		printf("MOVER:\n%s\n", cpp->content);
		printf("----------------------------\n");

		cpp = cpp->next;
	}


	while (bul == 0)
	{
		map = ft_create_map(&map, map_c, size);
		bul = ft_rec_solv(cp, cp, size, 1);
		map_c += ad;
		ad += 2;
		size++;
	}
//	ft_printmap(map, cp);











	i = 0;
	cpp = cp;
	while (cpp != NULL)
	{
		ft_rewrite(cpp, cpp);
		printf("END:\n%s\n", cpp->content);
/*		while (i < 4)
		{
			ft_putstr("CPP_x- ");
			ft_putnbr(cpp->x[i]);
			write(1, "\n", 1);
			ft_putstr("CPP_y- ");
			ft_putnbr(cpp->y[i]);
			write(1, "\n\n", 2);
			i++;
		}
*/		printf("----------------------------\n");
		i = 0;
		cpp = cpp->next;
	}
}
