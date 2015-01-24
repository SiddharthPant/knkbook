#include <stdio.h>

int main(void)
{
	int m = 1, k = 2, *ptr;
	
	ptr = &k;
	
	printf("\n");
	printf("m has the value %d and is stored at %p\n", m, (void *)&m);
	printf("k has the value %d and is stored at %p\n", k, (void *)&k);
	printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
	printf("The value of the integer pointed to by ptr is %d\n", *ptr);
	
	return 0;
}
