/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:29:49 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/11 15:29:51 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
char	*ft_lsttrim(char const *s, char c);
int		ft_lstsize(t_list *begin_list);


t_pos *ft_newpos(int j, int x, int y, int size)
{
	t_pos *link;

printf("e\n");

	link = (t_pos*)malloc(sizeof(t_pos));
	if (x && y && size)
	{
		link->x[j] = x;
		link->y[j] = y;
	}
	link->next = NULL;
	return (link);
}

void	ft_list_pos_back(int j, t_pos **begin_list, int x, int y)
{
    t_pos *cursor;

    cursor = *begin_list;
	printf("d\n");

    if (!cursor)
	{
        (*begin_list) = ft_newpos(j, x, y, 8);
		printf("dd\n");
	}
    else
    {
        while (cursor->next != NULL)
            cursor = cursor->next;
        cursor->next = ft_newpos(j, x, y, 8);
 	printf("ddd\n");

    }
}
*/


t_pos	*ft_coord(t_list **src)
{
	int		i;
	int		j;
	char	*pos;
	t_pos	*beg;

	i = 0;
	pos = (*src)->content;
	while (i < TETRA_SIZE)
	{
		j = 0;
		while (j < 4 && i < TETRA_SIZE)
		{
			printf("*pos-%c\n", *pos);
			if (*pos == '#')
			{
				printf("i-%d\n", i);
				beg->x[j] = ((i + 1) % 5);
				beg->y[j] = i / 5;
				printf("pos_x_beg - %d\n", beg->x[j]);
				printf("pos_y_beg - %d\n\n", beg->y[j]);
				j++;
			}
			i++;
			pos++;
		}
	}
	return (beg);
}

void	ft_solver(t_list **src)
{
	t_pos	*res;
	t_list	*cp;
	int i = 0;

	cp = *src;
ft_putendl("cp:");
ft_putendl(cp->content);
	res = ft_coord(&cp);
//	printf("b\n");
//	while(i < 4)
//	{
//		printf("pos_x - %d\n", res->x[0]);
//		printf("pos_y - %d\n", res->y[0]);
ft_putnbr(res->x[0]);
ft_putchar('\n');
ft_putnbr(res->y[0]);
ft_putchar('\n');
//		i++;
//	}
}
