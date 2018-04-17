/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_next.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 18:20:24 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/17 17:17:54 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_next(t_list **first)
{
	int i;
	int j;

	if ((*first)->next == NULL)
		return (0);
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (((*first)->x[i] == (*first)->next->x[j]) && ((*first)->y[i] == (*first)->next->y[j]))
				return(0);
	}
	return (1);
}
