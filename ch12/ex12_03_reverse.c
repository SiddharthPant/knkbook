#include <stdio.h>

#define N 10

void print_array(int [], int);

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N - 1], temp;
    
    while (p < q) {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
    
    print_array(a, N);
    
    return 0;
}

void print_array(const int a[], int n)
{
    printf("a[");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf(" ]\n");
}