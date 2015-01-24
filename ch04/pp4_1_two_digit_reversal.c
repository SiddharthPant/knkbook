#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, unit_digit, tens_digit, reverse;

	printf("Enter a two-digit number: ");
	scanf("%d", &num);

	unit_digit = num % 10;
	tens_digit = num / 10;
	reverse = unit_digit * 10 + tens_digit;

	printf("The reversal is: %d\n", reverse);

	return 0;
}