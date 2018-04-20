/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_current.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 21:00:24 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/19 21:00:24 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int ft_check_current(t_list **beg, t_list *cur)
{
	t_list *pos;
	int i;
	int j;

	pos = *beg;
	while (pos != NULL)
	{
		if (pos != cur)
		{
			i = -1;
			while (++i < 4)
			{
				j = -1;
				while (++j < 4)
					if ((pos->x[i] == cur->x[j]) && (pos->y[i] == cur->y[j]))
						return(0);
			}
		}
	pos = pos->next;
	}
	return (1);
}
