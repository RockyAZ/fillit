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
/*
ft_x_right
ft_y_down
*/
int		ft_rec_solv(t_list *beg, t_list *cur, int i)
{
	if (ft_check_all(&beg))
		return (1);
	while (ft_check_current(&beg, cur))
	{
		if (ft_x_right(cur, i) == 1)
		{
			if (ft_check_current(&beg, cur) == 0)
				ft_x_left(cur, i);
		}
		else if (ft_y_down(cur, i) == 1)
		{
			if (ft_check_current(&beg, cur) == 0)
				ft_y_up(cur, i);
		}
			if (ft_rec_solv(beg, cur->next, i))
				return (1);
	}
}

void	ft_solver(t_list **src)
{
	t_list	*cp;
	int bul;

	cp = *src;
	bul = 0;
	ft_mover(&cp);
	while (bul != 1)
	{
		bul = ft_rec_solv(cp, cp, 0);
		ft_add_size();
	}
}
