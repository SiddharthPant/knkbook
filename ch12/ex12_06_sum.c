#include <stdio.h>

int sum_array(const int [], int);

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    
    printf("Sum = %d\n", sum_array(a, 5));
    
    return 0;
}

int sum_array(const int *a, int n)
{
    int sum = 0;
    
    for (int *p = a; p < a + n; sum += *p++);
        
    return sum;
}