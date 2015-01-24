/*
 * 0901slectionSort.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

#include <stdio.h>

#define LENGTH 5

void selection_sort(int [], int);
void put_max_last(int [], int);

int main(void)
{
	int i, a[LENGTH];

	printf("Enter %d integers: ", LENGTH);
	for (i = 0; i < LENGTH; i++) {
		scanf("%d", &a[i]);
	}

	selection_sort(a, LENGTH);

	printf("Sorted array: [ ");
	for (i = 0; i < LENGTH; i++) {
		printf("%d ", a[i]);
	}
	printf("]");

	return 0;
}

void selection_sort(int a[], int n)
{
	put_max_last(a, n);
	if (n == 0) return;
	return selection_sort(a, n - 1);
}

void put_max_last(int a[], int n)
{
	int temp, max = a[n - 1], i, index_of_max = n - 1;
		for (i = 0; i < n; i++) {
			if (a[i] > max) {
				max = a[i];
				index_of_max = i;
			}
		}
		temp = a[n - 1];
		a[n - 1] = a[index_of_max];
		a[index_of_max] = temp;
}
