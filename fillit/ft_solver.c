/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:40:23 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/17 18:55:37 by azaporoz         ###   ########.fr       */
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

void	ft_rec_solv(t_list **src, int i, char c)
{
	if (ft_x_right(*src, i))
}

void	ft_solver(t_list **src)
{
	t_list	*cp;

	cp = *src;
	ft_mover(&cp);
	while (cp)
	{
		ft_rewrite(cp, cp, '#');
		cp = cp->next;
	}
	cp = *src;
	while (cp ->next)
	{
		ft_rec_solv(&cp, 1, 'A');
		cp = cp->next;
	}
	cp = *src;
	while (cp)
	{
		ft_rewrite(cp, cp, '#');
		cp = cp->next;
	}
/*
	cp = *src;
	ft_lstswap(&cp);
	printf("X1 - %d\n", ft_x_right(cp, 2));
	printf("Y1 - %d\n", ft_y_down(cp, 2));
	*src = cp;
*/

	while ((*src))
	{
		printf("SRC-\n%s\n", (*src)->content);
		(*src) = (*src)->next;
	}

/*
	while ((*src))
	{
		printf("SRC-\n%s\n", (*src)->content);
		i = 0;
			while (i < 4)
			{
				ft_putstr("POS_x- ");
				ft_putnbr((*src)->x[i]);
				write(1, "\n", 1);
				ft_putstr("POS_y- ");
				ft_putnbr((*src)->y[i]);
				write(1, "\n", 1);
				write(1, "\n", 1);
				i++;
			}
			printf("----------------------------\n");
			(*src) = (*src)->next;
	}

				HUY


   while (i < 4)
    {
	printf("CHECK - %d\n", ft_check_next(&cp));
        if (!ft_check_next(&cp))
        {
            printf("X - %d\n", ft_x_right(cp, 0));
            printf("Y - %d\n", ft_y_down(cp, 0));
            if (!ft_x_right(cp, i) && !ft_y_down(cp, i))
                ft_lstswap(&cp);
            else
                i = 4;
            if (!ft_x_right(cp, i) && !ft_y_down(cp, i))
                i++;
            else
                i = 4;
        }
        else
        {
            ft_rewrite(*src, cp, c++);
            cp = cp->next;
            i = 4;
			}
    }
*/
}
