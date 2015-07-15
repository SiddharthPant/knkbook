#include <stdio.h>

double inner_product(const double *, const double *, int);

int main(void)
{
	double a[] = {1.0, 2.0, 3.0};
	double b[] = {4.0, 5.0, 6.0};
	printf("inner product = %f\n", inner_product(a, b, 3));
	return 0;
}

double inner_product(const double *a, const double *b, int n)
{
	double product = 0;
	for (
		double *p = a, *q = b; 
		p < a + n && q < b + n;
		product += (*p++) * (*q++)
	);
	return product;
}