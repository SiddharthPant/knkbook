#include <stdio.h>

void find_two_largest(const int *, int , int *, int *);

int main(void)
{
	int a[] = {23, 45, 56, 43, 98, 90, 34, 44, 72, 54};
	int largest, second_largest;
	
	find_two_largest(a, 10, &largest, &second_largest);
	
	printf("largest = %d\n Second largest = %d\n", largest, second_largest);
	
	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	for (int *p = a; p < a + n; p++) {
		if (*p > *largest) {
			*second_largest = *largest;
			*largest = *p;
		} else if (*p > *second_largest){
			*second_largest = *p;
		}
	}
}