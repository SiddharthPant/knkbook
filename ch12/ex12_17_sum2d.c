#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

void fill_array(int [][LEN], int);	// Generates random nos. between 20-40
void print_array(int[][LEN], int);	// Neatly prints the temperatures array
int sum_two_dimensional_array(const int [][LEN], int);

int main(void)
{
	int test_array[LEN][LEN], sum;
	srand((unsigned) time(NULL));
	fill_array(test_array, LEN * LEN);
	print_array(test_array, LEN * LEN);
	printf("\n");
	
	sum = sum_two_dimensional_array(test_array, LEN);
	printf("Sum = %d\n", sum);
	
	return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
	int i, j, sum = 0;
	int *p;
	
	for (p = a[0]; p < a[0] + (n * LEN); p++) {
		sum += *p;
	}
	return sum;
}

void fill_array(int a[][LEN], int n)
{
	int *p;
	for (p = a[0]; p < a[0] + n; p++)
		*p = rand() % 100;
}

void print_array(int a[][LEN], int n)
{
	int *p, count = 1;
	for (p = a[0]; p < a[0] + n; p++, count++) {
		printf("%2d ", *p);
		if (count == LEN) {	// Every 24th no. should be followed by a new line
			printf("\n");	// This creates a neat 7x24 grid of nos.
			count = 0;		// resets the count
		}
	}
}