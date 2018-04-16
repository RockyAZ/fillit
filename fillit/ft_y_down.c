/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:51:03 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/16 20:46:26 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_y_down(t_list *pos)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if ((pos->y[i] + 1) > 3)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		pos->y[i]++;
		i++;
	}
	return (1);
}
