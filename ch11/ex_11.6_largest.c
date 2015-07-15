#include "stdio.h"

#define NUM 10

void find_two_largest(int [], int, int *, int *);

int main(void)
{
	int a[NUM];
	int largest, second_largest;
	
	printf("Enter 10 numbers: ");
	for (int i = 0; i < NUM; i++)
		scanf("%d", &a[i]);

	find_two_largest(a, NUM, &largest, &second_largest);

	printf("Largest = %d, Second Largest = %d\n", largest, second_largest);

	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = a[0];
	*second_largest = a[1];
	for (int i = 1; i < n; i++) {
		if (a[i] > *largest) {
			*second_largest = *largest;
			*largest = a[i];
		} else if (a[i] > *second_largest) {
			*second_largest = a[i];
		}

	}
}