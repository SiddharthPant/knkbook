/*
 * 0910arrayFunction.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

#include <stdio.h>

#define N 5

int largest(int [], int);
float average(int [], int);
int positiveNoCount(int [], int);

int main(void)
{
	int max, count, a[N] = {1, 2, 3, 4, 5};
	float avg;

	max = largest(a, N);
	avg = average(a, N);
	count = positiveNoCount(a, N);
	printf("Largest no. = %d\n", max);
	printf("average = %.2f\n", avg);
	printf("No. of positive elements are %d\n", count);

	return 0;
}

int largest(int a[], int n)
{
	int i, max = a[0];

	for (i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}

	return max;
}

float average(int a[], int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];

	return (float) sum /(float) n;
}

int positiveNoCount(int a[], int n)
{
	int i, count = 0;

	for (i = 0; i < n; i++) {
		if (a[i] > 0)
			count++;
	}

	return count;
}
