#include <stdio.h>
#include <stdbool.h>

bool search(const int [], int, int);

int main(void)
{
    int temperatures[7][24];
    temperatures[4][20] = 32;
    
    printf("%s\n",search(temperatures[0], 7*24, 32)?"true":"false");
    
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