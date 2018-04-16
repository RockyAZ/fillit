/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:40:23 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/16 20:46:52 by azaporoz         ###   ########.fr       */
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

	if (lst->next == NULL)
		return (0);
	i = -1;
	while (++i < 4)
		if (lst->x[i] == lst->next->x[i])
			return (0);
	return (1);
}

void	ft_mover(t_list **cp)
{
	t_list *lst;
	int i;

	lst = *cp;
	while (lst)
	{
		i = 1;
		while (i)
			i = ft_x_left(lst);
		lst = lst->next;
	}
	lst = *cp;
	while (lst)
	{
		i = 1;
		while (i)
			i = ft_y_up(lst);
		lst = lst->next;
	}
}

void	ft_solver(t_list **src)
{
	t_list	*cp;

	cp = *src;
	ft_mover(&cp);
    int i = 0;
    while (cp != NULL)
    {
        ft_rewrite(cp);
        printf("str:\n%s\n", cp->content);
        while (i < 4)
        {
            ft_putstr("POS_x- ");
            ft_putnbr(cp->x[i]);
            write(1, "\n", 1);
            ft_putstr("POS_y- ");
            ft_putnbr(cp->y[i]);
            write(1, "\n", 1);
            write(1, "\n", 1);
            i++;
        }
        printf("----------------------------\n");
        i = 0;
        cp = cp->next;
    }

	while ((*src))
	{
		ft_rewrite(*src);
		printf("SRC-\n%s\n", (*src)->content);
		(*src) = (*src)->next;
	}
}
