/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:40:23 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/16 19:13:10 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lstswap(t_list **src)
{
	t_list	*cp;

	cp = *src;
	(*src) = (*src)->next;
	cp->next = (*src)->next;
	(*src)->next = cp;
}

int		ft_check(t_list *lst)
{
	int i;

	if (lst->next = NULL)
		return (0);
	i = -1;
	while (++i < 4)
		if (lst->x[i] = lst->next->x[i])
			return (0);
	return (1);
}

void	ft_solver(t_list **src)
{
	t_list	*cp;

	cp = *src;
	
	while (cp)
	{
		if (!ft_check(cp))
		{
			if (!ft_x_left(cp), &ft_check)
				ft_lstswap(&cp);
			else if (!ft_check(cp))
				ft_x_right(cp);
		}
		else
			
}
	while (src)
	{
		printf("SRC-\n%s\n", src->content);
		src = src->next;
	}
}
