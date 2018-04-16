/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_next.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 18:20:24 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/15 18:22:06 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_next(t_pos **first)
{
	int i;

	i = 0;
	if ((*first)->next == NULL)
		return (0);
	while (i < 4)
	{
		if ((*first)->x[i] == (*first)->next->x[i] && (*first)->y[i] == (*first)->next->y[i])
			return(0);
		i++;
	}
	return (1);
}
