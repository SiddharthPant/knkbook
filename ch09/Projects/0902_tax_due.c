/*
 * 0902_tax_due.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

#include <stdio.h>

#define NUM_LEVELS 5

float get_tax(float income);

int main(void)
{
	float income;

	printf("Enter the amount of taxable income: $");
	scanf("%f", &income);

	printf("Tax due: $%.2f\n", get_tax(income));
	return 0;
}


float get_tax(float income)
{
	float tax_levels[NUM_LEVELS] =	{750.00f, 2250.00f, 3750.00f, 5250.00f, 7000.00f};
	float base[NUM_LEVELS + 1] =	{  0.00f,    2.00f,   37.50f,   82.50f,  142.50f, 230.00f};
	float base_tax, percent;
	int i;

	for (i = NUM_LEVELS - 1; income < tax_levels[i]; i--) {
		base_tax = base[i];
		percent = i + 1;
	}

	if (income > tax_levels[NUM_LEVELS - 1]) {
		base_tax = base[NUM_LEVELS];
		percent = 6.00f;
	}

	return base_tax + ((percent / 100) * income);
}
