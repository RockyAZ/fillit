/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   228.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 20:53:09 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/21 18:38:06 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct	s_res
{
	int			x;
	struct s_res	*next;
}				t_res;


void f(t_res **cp)
{
	free(cp);
	*cp = NULL; 
}

void f1(int i, int j)
{
	printf("i - %d\n", i);
    printf("j - %d\n", j);
}

int main()
{
	int i = 0;
	int j = 3;
	f1(i , j += j);
	printf("main i - %d\n", i);
    printf("main j - %d\n", j);


/*
	t_res *c;
	c = (t_res*)malloc(sizeof(t_res));
	c->x = 3;
	c->next = (t_res*)malloc(sizeof(t_res));
	c->next->x = 4;
	printf("%d\n", c->x);
	f(&c);
	printf("%d\n", c->x);
*/	return (0);
}
