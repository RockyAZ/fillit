/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:12:11 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/10 16:12:43 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_list_push_back(t_pos **begin_list, void *data, int size, char c)
{
	t_pos *cursor;

	cursor = *begin_list;
	if (!cursor)
		(*begin_list) = ft_lstnew_pos(data, size, c);
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = ft_lstnew_pos(data, size, c);
	}
}
