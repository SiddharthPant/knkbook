#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i, a;
	double e = 1.00f, factorial;

	printf("Enter an integer: ");
	scanf("%d", &n);

	a = n;
	while (n > 0) {
		factorial = 1;
		for (i = n; i > 0; i--) {
			factorial *= i;
		}
		e += (1.00f / factorial);
		n--;
	}
	
	printf("e = 1 + 1/1! + 1/2! + ... + 1/%d! = %f", a, e);

	return 0;
}