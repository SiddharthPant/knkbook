/*
 * 0912innerProduct.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

#include <stdio.h>

#define N 5

double innerProduct(double [], double [], int);

int main(void)
{
	double a[N] = {1, 1, 1, 1, 1}, b[N] = {1, 1, 1, 1, 1};

	printf("Inner product is = %.1lf", innerProduct(a, b, N));

	return 0;
}

double innerProduct(double a[], double b[], int n)
{
	int i, inp = 0;

	for (i = 0; i < n; i++)
		inp += a[i] * b[i];

	return inp;
}
