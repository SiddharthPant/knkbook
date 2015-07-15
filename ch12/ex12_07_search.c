#include <stdio.h>
#include <stdbool.h>

bool search(const int [], int, int);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    
    printf("%s\n",search(a, 5, 6)?"true":"false");
    
    return 0;    
}

bool search(const int a[], int n, int key)
{
    int *p;
    
    for(p = a; p < a + n; p++) {
        if (*p == key) {
            return true;
        }
    }
    
    return false;
}