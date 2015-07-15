#include <stdio.h>

int *find_middle(int [], int);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = find_middle(a, 10);
    printf("p = %p, *p = %d\n", p, *p);
    
    return 0;
}

int *find_middle(int a[], int n)
{
    return a + n/2;
}