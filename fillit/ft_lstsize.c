/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:46:36 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/16 16:52:13 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_lstsize(t_pos *begin_list)
{
	int		i;
	t_pos	*cursor;

	i = 0;
	cursor = begin_list;
	while (cursor != NULL)
	{
		cursor = cursor->next;
		i++;
	}
	return (i);
}
