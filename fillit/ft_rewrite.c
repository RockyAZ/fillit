/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rewrite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:40:05 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/19 14:14:25 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_rewrite(t_pos *dst, t_pos *pos)
{
	int		i;
	int		j;
	char	*lst_pos;

	i = 0;
	j = 0;
	lst_pos = dst->content;
	while (i <= TETRA_SIZE - 1)
	{
		if ((i % 5 == pos->x[j]) && (i / 5 == pos->y[j]) && *lst_pos != '\n')
		{
			*lst_pos = dst->c;
			j++;
		}
		else if (*lst_pos == dst->c)
			*lst_pos = '.';
		i++;
		lst_pos++;
	}
}
