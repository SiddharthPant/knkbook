#include <stdio.h>

void avg_sum(double [], int, double *, double *);

int main(void)
{
	double a[] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
	double avg, sum;
	avg_sum(a, 10, &avg, &sum);
	printf("avg = %f, sum = %f\n", avg, sum);

	return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}
