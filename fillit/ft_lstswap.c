/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:11:31 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/21 14:11:54 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_pos	*ft_lstswap(t_pos *src)
{
	t_pos	*cp;

	cp = src;
	if (cp->next == NULL)
		return (NULL);
	cp = cp->next;
	src->next = cp->next;
	cp->next = src;
	return (cp);
}
