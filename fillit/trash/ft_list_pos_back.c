/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pos_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:10:46 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/12 18:10:47 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	t_pos	*ft_lstpos(t_pos **data)
{
	t_pos *link;

	link = NULL;
	link = (t_pos*)malloc(sizeof(t_pos));
	if (link == NULL)
		return (NULL);
    link = *data;
//	link->next = NULL;
	return (link);
}

void	ft_list_pos_back(t_pos **begin_list, t_pos **buf_p)
{
	t_pos *cursor;
    t_pos *cp;

	cursor = *begin_list;
    cp = *buf_p;
	if (!cursor)
		(*begin_list) = *buf_p;
    else
    {
	    while (cursor->next != NULL)
	    	cursor = cursor->next;
	    cursor->next = ft_lstpos(&cp);
    }
}
