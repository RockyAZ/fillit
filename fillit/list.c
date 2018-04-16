/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:49:20 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/10 12:49:37 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef struct s_list 
{
    struct s_list *next;
    int b;
}   t_list;

void func(t_list **node, int a)
{
    t_list *tmp;
    
    tmp = *node;
    tmp = tmp->next;
    tmp = (t_list*)malloc(sizeof(t_list));
    tmp->b = 6;
    tmp->next = NULL;
    *node = tmp;
}

int main()
{
    t_list *node;
    int a = 5;
    int i = 2;
    node = (t_list*)malloc(sizeof(t_list));
    node->b = 1;
    while(i--)
        func(node, a++);
    while(node)
    {
        printf("%d\n", node->b);
        node = node->next;
    }
    return 0;
}
