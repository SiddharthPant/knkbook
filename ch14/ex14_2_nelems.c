#include <stdio.h>

#define NELEMS(a) ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
	int a[10];
	printf("%d\n", NELEMS(a));
	return 0;
}