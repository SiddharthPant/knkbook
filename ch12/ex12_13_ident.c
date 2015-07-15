#include <stdio.h>

#define N 10

int main(void)
{
    double ident[N][N], *p;
    int count = 0;
    
    for (p = ident[0]; p < &ident[N][0]; p++, count++) {
	*p = 0.0;
	if (count == N + 1) {
	    *p = 1.0;
	    count = 0;
	}
    }
    ident[0][0] = 1.0;
    
    for (int i = 0; i < N; i++) {
	for (int j = 0; j < N; j++) {
	    printf("%4.1f ", ident[i][j]);
	}
	printf("\n");
    }
    
    return 0;
}