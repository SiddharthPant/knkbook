#include <stdio.h>

void reduce(int, int, int *, int *);
int get_gcd(int, int);

int main(void)
{
	int numerator, reduced_numerator;
	int denominator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d /%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int gcd = get_gcd(numerator, denominator);
	*reduced_numerator = numerator / gcd;
	*reduced_denominator = denominator / gcd;
}

int get_gcd(int numerator, int denominator)
{
	while (denominator != 0) {
		int remainder = numerator % denominator;
		numerator = denominator;
		denominator = remainder;
	}

	return numerator;
}
