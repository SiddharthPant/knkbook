#include <stdio.h>

void create_magic_square(int n, char [][n]);
void print_magic_square(int n, char [][n]);

int main(void)
{
	int i, j, n;

	printf("Enter size of magic square: ");
	scanf("%d", &n);
	int magic_square[n][n];

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			magic_square[i][j] = 0;

	create_magic_square(n, magic_square);

	print_magic_square(n, magic_square);

	return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
	int i, j, temp_i, temp_j;

	i = 0; j = n / 2;
	for (int k = 1; k <= n * n; k++) {
		if (magic_square[i][j] == 0) {
			magic_square[i][j] = k;
		} else {
			i = ++temp_i;
			j = temp_j;
			magic_square[i][j] = k;
		}
		temp_i = i--;
		temp_j = j++;
		if (i < 0 || i >= n) i += n;
		if (j < 0 || j >= n) j -= n;
	}
}

void print_magic_square(int n, char magic_square[n][n])
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%2d ", magic_square[i][j]);
		printf("\n");
	}
}
