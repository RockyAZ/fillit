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

static	t_pos	*ft_lstpos(void)
{
	t_pos *link;

	link = NULL;
	link = (t_pos*)malloc(sizeof(t_pos));
	if (link == NULL)
		return (NULL);
	return (link);
}


static void		ft_list_pos_back(t_pos **beg, int x, int y, int j)
{
	t_pos *cp;

	cp = *beg;
	cp->x[j] = x;
	cp->y[j] = y;

/*	t_pos *cursor;



//	cursor = *begin_list;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = ft_lstpos(j, x, y);
*/
}


void	ft_coord(t_list **src, t_pos **res)
{
	int		i;
	int		j;
	char	*pos;
	t_pos	*beg;

	i = 0;
	beg = ft_lstpos();
	pos = (*src)->content;
	while (i < TETRA_SIZE)
	{
		j = 0;
		while (j < 4 && i < TETRA_SIZE)
		{
			if (*pos == '#')
			{
//				beg->x[j] = i % 5;
//				beg->y[j] = i / 5;

				ft_list_pos_back(&beg, i % 5, i / 5, j);

				printf("pos_x_beg - %d\n", beg->x[j]);
				printf("pos_y_beg - %d\n\n",beg->y[j]);
				j++;
			}
			i++;
			pos++;
		}
	}
	ft_putstr("BAAAAA\n");
	*res = beg;
}

void	ft_solver(t_list **src)
{
	t_list	*cp;
	t_pos	*res;
int i;

i = 0;
	cp = *src;
	ft_putendl("cp1:");
	ft_putendl(cp->content);
 	ft_putstr("BBBBB\n");
	ft_coord(&cp, &res);
	ft_putstr("CCCCC\n");

while (i < 4)
{
	ft_putstr("res_x- ");
	ft_putnbr(res->x[i]);
	write(1, "\n", 1);
	ft_putstr("res_y- ");
	ft_putnbr(res->y[i]);
	write(1, "\n", 1);
	write(1, "\n", 1);
	i++;
}

}
