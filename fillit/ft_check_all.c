/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 17:45:02 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/19 18:22:29 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_all(t_list **first)
{
	t_list *cp;
	t_list *pos;
	int i;
	int j;

	pos = *first;
	while (pos != NULL)
	{
		cp = pos->next;
		while (cp != NULL)
		{
			i = -1;
			while (++i < 4)
			{
				j = -1;
				while (++j < 4)
					if ((pos->x[i] == cp->x[j]) && (pos->y[i] == cp->y[j]))
						return(0);
			}
			cp = cp->next;
		}
		pos = pos->next;
	}
	return (1);
}
