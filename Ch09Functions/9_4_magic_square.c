#include <stdio.h>

int main(void)
{
	int i, j, n, temp_i, temp_j;

	printf("Enter size of magic square: ");
	scanf("%d", &n);
	int matrix[n][n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			matrix[i][j] = 0;

	i = 0; j = n / 2;

	for (int k = 1; k <= n * n; k++) {
		if (matrix[i][j] == 0) {
			matrix[i][j] = k;	
		} else {
			i = ++temp_i;
			j = temp_j;
			matrix[i][j] = k;
		}
		temp_i = i--;
		temp_j = j++;
		if (i < 0 || i >= n) i += n;
		if (j < 0 || j >= n) j -= n;
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%2d ", matrix[i][j]);
		printf("\n");
	}

	return 0;
}
