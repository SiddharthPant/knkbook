#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned long int n = 1, i, factorial;
	long double e = 1.00, epsilon;

	printf("Enter floating point no. (E): ");
	scanf("%Lf", &epsilon);

	for (;;) {
		factorial = 1;
		for (i = n; i > 0; i--) {
			factorial *= i;
		}
		e += (1.00 / factorial);
		if ((1.00 / factorial) < epsilon) break;
		n++;
	}
	
	printf("E > e = 1 + 1/1! + 1/2! + ... + 1/%d! = %Lf", n, e);

	return 0;
}