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

void	ft_solver(t_list **src)
{
	t_list	*cp;
	int bul;

	cp = *src;
	bul = 0;
	ft_mover(&cp);
	bul = ft_rec_solv(cp, cp, 1);
}
