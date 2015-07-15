#include <stdio.h>

int find_largest(int [], int);

int main(void)
{
    int a[] = {23, 45, 56, 43, 98, 90, 34, 44, 72, 54};
    
    printf("largest = %d\n", find_largest(a, 10));
    
    return 0;
}

int find_largest(int a[], int n)
{
    int max = *a;
    
    for (int *p = a; p < a + n; p++)
	if (*p > max)
	    max = *p;
    return max;
}