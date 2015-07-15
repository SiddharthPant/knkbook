/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* qsort.c (Chapter 9, page 207) */
/* Sorts an array of integers using Quicksort algorithm */

#include <stdio.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int* split(int a[], int *low, int *high);

int main(void) {
	int a[N], *p;

	printf("Enter %d numbers to be sorted: ", N);
	for (p = a; p < a + N; p++)
		scanf("%d", p);

	quicksort(a, &a[0], &a[N - 1]);

	printf("In sorted order: ");
	for (p = a; p < a + N; p++)
		printf("%d ", *p);
	printf("\n");

	return 0;
}

void quicksort(int a[], int *low, int *high) {
	int *middle;

	if (low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int* split(int a[], int *low, int *high) {
	int part_element = *low;

	for (;;) {
		while (low < high && part_element <= *high)
			high--;
		if (low >= high) break;
		*low++ = *high;

		while (low < high && *low <= part_element)
			low++;
		if (low >= high) break;
		*high-- = *low;
	}

	*high = part_element;
	return high;
}
