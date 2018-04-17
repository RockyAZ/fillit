/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:51:03 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/17 18:00:27 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_y_down(t_list *pos, int k)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if ((pos->y[i] + k) > 3)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		pos->y[i] += k;
		i++;
	}
	if (!ft_check_next(&pos))
	{
		ft_y_up(pos, k);
		return (10);
	}
	return (1);
}
