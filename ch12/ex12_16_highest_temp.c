#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_largest(int [], int);
void fill_array(int [][24], int);	// Generates random nos. between 20-40
void print_array(int[][24], int);	// Neatly prints the temperatures array

int main(void)
{
	int i, temperatures[7][24];
	srand((unsigned) time(NULL));
	fill_array(temperatures, 7 * 24);
	printf("Array Temperatures: \n");
	print_array(temperatures, 7 * 24);
	printf("\n");
	
	printf("Largest in each row: ");
	for (i = 0; i < 7; i++) {
		printf("%d ", find_largest(temperatures[i], 24));
	}
	printf("\n");
	
}

int find_largest(int a[], int n)
{
    int max = *a;
    
    for (int *p = a; p < a + n; p++)
	if (*p > max)
	    max = *p;
    return max;
}

void fill_array(int a[][24], int n)
{
	int *p;
	for (p = a[0]; p < a[0] + n; p++)
		*p = 20 + rand() % 20;
}

void print_array(int a[][24], int n)
{
	int *p, count = 1;
	for (p = a[0]; p < a[0] + n; p++, count++) {
		printf("%d ", *p);
		if (count == 24) {	// Every 24th no. should be followed by a new line
			printf("\n");	// This creates a neat 7x24 grid of nos.
			count = 0;		// resets the count
		}
	}
}

