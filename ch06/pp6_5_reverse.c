#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, unit_digit, reverse = 0;

	printf("Enter a number: ") ;
	scanf("%d", &num);

	do {
		unit_digit = num % 10;
		num = num / 10;
		reverse = reverse * 10 + unit_digit;
	} while (num > 0);

	printf("Reversal is: %d\n", reverse);
	return 0;
}