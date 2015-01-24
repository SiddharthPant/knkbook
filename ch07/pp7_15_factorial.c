#include <stdio.h>

int main(void)
{
	long double n, i, factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%Lf", &n);

	for (i = n; i > 0; i--) {
		factorial = factorial * i;
	}

	printf("Factorial of %Lf: %Lf", n, factorial);

	return 0;
}
