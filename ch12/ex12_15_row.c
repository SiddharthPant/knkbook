#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int [][24], int);	// Generates random nos. between 20-40
void print_array(int[][24], int);	// Neatly prints the temperatures array

int main(void)
{
	int temperatures[7][24], *p;
	int i = 3;	// Selected row no.(can also use scanf)
	srand((unsigned) time(NULL));
	fill_array(temperatures, 7 * 24);
	printf("Array Temperatures: \n");
	print_array(temperatures, 7 * 24);
	printf("\n");
	printf("Row %d:\n", i + 1);
	
	for (p = temperatures[i]; p < temperatures[i] + 24; p++) {
		printf("%d ", *p);
	}
	printf("\n");
	
	return 0;
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