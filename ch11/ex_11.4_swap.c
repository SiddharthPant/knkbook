#include "stdio.h"

void swap(int *, int *);

int main(void)
{
	int i, j;
	printf("Enter two numbers: ");
	scanf("%d %d", &i, &j);
	printf("i = %d, j = %d\n", i, j);
	swap(&i, &j);
	printf("Aveda Kedvra!!!\n");
	printf("i = %d, j = %d\n", i, j);
	printf("Don't console, just face it damnit!!\n");

	return 0;
}

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

