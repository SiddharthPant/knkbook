#include <stdio.h>

int main(int argc, char const *argv[])
{
	float income, base, percent, tax;

	printf("Enter the amount of taxable income: $");
	scanf("%f", &income);

	if (income < 750.00f) {
		base = 0.00f;
		percent = 1.00f;
	} else if (income < 2250.00f) {
		base = 7.50f;
		percent = 2.00f;
	} else if (income < 3750.00f) {
		base = 37.50f;
		percent = 3.00f;
	} else if (income < 5250.00f) {
		base = 82.50f;
		percent = 4.00f;
	} else if (income < 7000.00f) {
		base = 142.50f;
		percent = 5.00f;
	} else {
		base = 230.00f;
		percent = 6.00f;
	}
	tax = (base + ((percent / 100) * income));

	printf("Tax due: $%.2f\n", tax);
	return 0;
}