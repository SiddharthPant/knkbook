#include <stdio.h>

int main(int argc, char const *argv[])
{
	float n, max = 0;

	printf("Enter a number: ");
	scanf("%f", &n);
	while (n > 0) {
		if (n > max)
			max = n;
		printf("Enter a number: ");
		scanf("%f", &n);

	}

	printf("The largest number entered was: %.2f\n", max);

	return 0;
}