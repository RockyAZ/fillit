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
/*
t_list	*ft_lstswap(t_list *src)
{
	t_list	*cp;

	cp = src;
	if (cp->next == NULL)
		return (NULL);
	cp = cp->next;
	src->next = cp->next;
	cp->next = src;
	return (cp);
}
*/
void	ft_mover(t_list **cp)
{
	t_list	*lst;
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

int		ft_coord_check_x(t_list *beg, t_list *cur, int i)
{
	int j;

	j = 1;
	if (ft_x_right(cur, i) == 1)
	{
		if (ft_check_current(&beg, cur) == 0)
		{
			while (j < i)
			{
				ft_y_down(cur, 1);
				if (ft_check_current(&beg, cur) == 1)
					return (1);
				j++;
			}
			ft_y_up(cur, j - 1);
		}
		else
			return (1);
		ft_x_left(cur, i);
	}
	return (0);
}

int		ft_coord_check_y(t_list *beg, t_list *cur, int i)
{
	int j;

	j = 1;
	if (ft_y_down(cur, i) == 1)
	{
		if (ft_check_current(&beg, cur) == 0)
		{
			while (j < i)
			{
				ft_x_right(cur, 1);
				if (ft_check_current(&beg, cur) == 1)
					return (1);
				j++;
			}
			ft_x_left(cur, j - 1);
		}
		else
			return (1);
		ft_y_up(cur, i);
	}
	return (0);
}

int		ft_rec_solv(t_list *beg, t_list *cur, int i)
{
	if (ft_check_all(&beg))
		return (1);
	while (cur)
	{
		if (ft_coord_check_x(beg, cur, i) == 1)

		ft_coord_check_y(beg, cur, i);
		cur = cur->next;
	}
	return (0);
}

void	ft_solver(t_list **src)
{
	t_list	*cp;
	int bul;

	cp = *src;
	bul = 0;
	ft_mover(&cp);
	bul = ft_rec_solv(cp, cp, 1);
}
