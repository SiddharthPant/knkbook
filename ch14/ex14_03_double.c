#include <stdio.h>

#define DOUBLE(x) 2*x
#define FIXED_DOUBLE(x) (2 * (x))

int main(void)
{
	printf("DOUBLE(1 + 2) = %d\n", DOUBLE(1 + 2));
	printf("4 / DOUBLE(2) = %d\n", 4 / DOUBLE(2));
	printf("FIXED_DOUBLE(1 + 2) = %d\n", FIXED_DOUBLE(1 + 2));
	printf("4 / FIXED_DOUBLE(2) = %d\n", 4 / FIXED_DOUBLE(2));
	return 0;
}