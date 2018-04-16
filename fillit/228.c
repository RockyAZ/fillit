#include <stdio.h>

/*
int f(int *i)
{
	printf("AAA\n");
	return(*i = 0);
}

void f1(int *i, int ft())
{
	ft(i);
}

int main()
{
	int i = 9;
	f1(&i, &f);
	printf("%d\n", i);
	return (0);
}
*/
#include <stdlib.h>
typedef struct s_list 
{
    struct s_list *next;
    int b;
}   t_list;

void func(t_list *node)
{

    node->b = 2;
	printf("SHRA-%d\n", node->b);
    node->next = (t_list*)malloc(sizeof(t_list));
    node = node->next;
    node->b = 3;
	printf("SHRA1-%d\n", node->b);
    node->next = NULL;
}

int main()
{
    t_list *node;
    node = (t_list*)malloc(sizeof(t_list));
    node->b = 1;
	func(node);
    while(node)
    {
        printf("NODE-%d\n", node->b);
        node = node->next;
    }
    return 0;
}
