/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rewrite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:40:05 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/17 16:53:11 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_rewrite(t_list *lst, t_list *pos, char c)
{
	int		i;
	int		j;
	char	*lst_pos;

	i = 0;
	j = 0;
	lst_pos = lst->content;
	while (i <= TETRA_SIZE - 1)
	{
		if ((i % 5 == pos->x[j]) && (i / 5 == pos->y[j]) && *lst_pos != '\n')
		{
			*lst_pos = c;
			j++;
		}
		else if (*lst_pos == '#')
			*lst_pos = '.';
		i++;
		lst_pos++;
	}
}
