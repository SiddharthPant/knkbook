#include <stdio.h>

void store_zeros(int [], int);
void print_array(const int [], int);

int main(void)
{
    int a[10];
    store_zeros(a, 10);
    print_array(a, 10);
    
    return 0;
}

void store_zeros(int a[], int n)
{
    for (int *p = a; p < a + n; *p++ = 0);
}

void print_array(const int a[], int n)
{
    printf("a[");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf(" ]\n");
}