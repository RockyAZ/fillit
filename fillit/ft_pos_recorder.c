/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_recorder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:37:55 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/17 20:55:45 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_pos_recorder(t_pos *src)
{
	int		i;
	int		j;
	char	*pos;

	i = 0;
	pos = src->content;
	while (i < TETRA_SIZE)
	{
		j = 0;
		while (j < 4 && i < TETRA_SIZE)
		{
			if (*pos == '#')
			{
				src->x[j] = i % 5;
				src->y[j] = i / 5;
				j++;
			}
			i++;
			pos++;
		}
	}
}
