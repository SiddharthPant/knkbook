#include <stdio.h>

#define N 6

int polynomial(int);

int main(void)
{
	int x;

	printf("Enter value of x: ");
	scanf("%d", &x);

	printf("Function returned %d", polynomial(x));

	return 0;
}

int polynomial(int x)
{
	int i, j, value = 0, arr[N - 1] = {1, 1, 1, 1, 1}, coefficients[N] = {3, 2, -5, -1, 7, -6} ;
	for (i = 0; i < N - 1; i++) {
		for (j = N - 2; j > 0; j--) {
			arr[i] *= x;
		}
	}

	for (i = 0; i < N - 1; i++) {
		value += coefficients[i] * arr[i];
	}
	return value + coefficients[N - 1];
}

