#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 5

int main(void)
{
	int i, j, sum_row, sum_column, a[NUM_ROWS][NUM_COLUMNS];
	
	for (i = 0; i < NUM_ROWS; i++) {
		printf("Enter row %d: ", i + 1);
		for (j = 0; j < NUM_COLUMNS; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Row totals: ");
	for (i = 0; i < NUM_ROWS; i++) {
		sum_row = 0;
		for (j = 0; j < NUM_COLUMNS; j++) {
			sum_row += a[i][j];
		}
		printf("%d ", sum_row);
	}
	printf("\n");
	printf("Column totals: ");
	for (j = 0; j < NUM_COLUMNS; j++) {
		sum_column = 0;
		for (i = 0; i < NUM_ROWS; i++) {
			sum_column += a[i][j];
		}
		printf("%d ", sum_column);
	}
	printf("\n");

	return 0;
}