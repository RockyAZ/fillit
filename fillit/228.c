#include <stdio.h>

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
