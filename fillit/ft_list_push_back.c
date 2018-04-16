/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:12:11 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/16 15:49:55 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *data, int size)
{
	t_list *cursor;

	cursor = *begin_list;
	if (!cursor)
		(*begin_list) = ft_lstnew(data, size);
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = ft_lstnew(data, size);
	}
}
