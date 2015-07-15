#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 5

int main(void)
{
	int i, j, total_score_student, total_score_quiz, high_score, low_score, a[NUM_ROWS][NUM_COLUMNS];
	
	for (i = 0; i < NUM_ROWS; i++) {							/* Input Loop */
		printf("Enter quiz scores for Student %d: ", i + 1);
		for (j = 0; j < NUM_COLUMNS; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Total score: ");									/* Total score for each student */
	for (i = 0; i < NUM_ROWS; i++) {
		total_score_student = 0;
		for (j = 0; j < NUM_COLUMNS; j++) {
			total_score_student += a[i][j];
		}
		printf("%d ", total_score_student);
	}
	printf("\n");
	printf("Average (student): ");
	for (i = 0; i < NUM_ROWS; i++) {							/* Average score for each student */
		total_score_student = 0;								/* Its total score divided by total columns */
		for (j = 0; j < NUM_COLUMNS; j++) {						/* i.e. total row sum / total no. of columns  */
			total_score_student += a[i][j];
		}
		printf("%.2f ", (float) total_score_student / NUM_COLUMNS);
	}
	printf("\n");
	printf("Average (quiz): ");
	for (j = 0; j < NUM_COLUMNS; j++) {							/* Average score for each quiz */
		total_score_quiz = 0;									/* Again its total column sum / total no. of rows */
		for (i = 0; i < NUM_ROWS; i++) {
			total_score_quiz += a[i][j];
		}
		printf("%.2f ", (float) total_score_quiz / NUM_ROWS);
	}
	printf("\n");
	printf("High score: ");
	for (j = 0; j < NUM_COLUMNS; j++) {
		high_score = a[0][j];									/* Compares elements of single column */
		for (i = 0; i < NUM_ROWS; i++) {						/* Assigns greater one to high_score */
			if (a[i][j] > high_score)		/* So after the loop is complete the greatest value is in high_score */
				high_score = a[i][j];
		}
		printf("%d ", high_score);
	}
	printf("\n");
	printf("Low score: ");
	for (j = 0; j < NUM_COLUMNS; j++) {
		low_score = a[0][j];									/* Compares elements of single column */
		for (i = 0; i < NUM_ROWS; i++) {						/* Assigns lower one to low_score */
			if (a[i][j] < low_score)		/* So after the loop is complete the lowest value is in low_score */
				low_score = a[i][j];
		}
		printf("%d ", low_score);
	}
	printf("\n");

	return 0;
}