/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:37:29 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/21 15:37:44 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_pos	*ft_lstnew_pos(void const *content, size_t content_size, char c)
{
	t_pos *link;

	link = (t_pos*)malloc(sizeof(t_pos));
	if (link == NULL)
		return (NULL);
	if (content == NULL)
	{
		link->content = NULL;
		link->content_size = 0;
		link->c = c;
	}
	else
	{
		link->content = malloc(content_size);
		if (link->content == NULL)
		{
			free(link);
			return (NULL);
		}
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
		link->c = c;
	}
	link->next = NULL;
	return (link);
}
