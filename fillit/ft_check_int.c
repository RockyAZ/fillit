/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 17:29:26 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/22 17:29:27 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int ft_check_int(t_pos *beg, int to)
{
    t_pos *pos;
    int i;
    int j;
    int cp;

    cp = 0;
    while (to > 0)
    {
        pos = beg->next;
        if (to == 1)
            return (1);
        while (cp++ < to - 1)
        {
            i = -1;
            while (++i < 4)
            {
                j = -1;
	        	while (++j < 4)
		        	if ((beg->x[i] == pos->x[j]) && (beg->y[i] == pos->y[j]))
		    	    	return(0);
            }
            pos = pos->next;
        }
        beg = beg->next;
        to--;
        cp = 0;
    }
    return (1);
}
