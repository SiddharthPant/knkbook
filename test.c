#include "stdio.h"

int main(void)
{
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];

	printf("*(p + 3)  = %d\n", *(p + 3));
	printf("*(q - 3)  = %d\n", *(q - 3));
	printf("  q - p   = %d\n", q - p);
	printf("  p < q  is %s\n", (p < q ? "true" : "false"));
	printf(" *p < *q is %s\n", (*p < *q ? "true" : "false"));

	return 0;
}