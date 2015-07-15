#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, unit_digit, tens_digit, rem_digit, hdred_digit, reverse;

	printf("Enter a two-digit number: ");
	scanf("%d", &num);

	unit_digit = num % 10;
	rem_digit = num / 10;
	tens_digit = rem_digit % 10;
	hdred_digit = rem_digit / 10;
	reverse = unit_digit * 100 + tens_digit * 10 + hdred_digit;

	printf("The reversal is: %d\n", reverse);

	return 0;
}