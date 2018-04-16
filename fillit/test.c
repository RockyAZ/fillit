/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 15:08:55 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/15 20:25:11 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include "fillit.h"

typedef struct  s_pos
{
    char        *x;
	struct s_pos *next;
}               t_pos;


void cng(t_pos **pos)
{
	t_pos *i;

	i = *pos;
	i->x = strcpy(i->x, "444");
}

void f(t_pos *pos)
{
	pos->x = strcpy(pos->x, "333");
}



int main()
{
	t_pos *i;

	i = (t_pos*)malloc(sizeof(t_pos));
	i->x = strcpy(i->x, "1111");
    printf("x-%s\n", i->x);
/*
	f(i);
	printf("x-%s\n", i->x);
	cng(&i);
	printf("x-%s\n", i->x);*/
	return (0);
}

