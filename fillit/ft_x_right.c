/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:49:51 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/17 18:28:06 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_x_right(t_list *pos, int k)
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		if ((pos->x[i] + k) > 3)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		pos->x[i] += k;
		i++;
	}
	if (!ft_check_next(&pos))
	{
		ft_x_left(pos, k);
		return (0);
	}
	return (1);
}
