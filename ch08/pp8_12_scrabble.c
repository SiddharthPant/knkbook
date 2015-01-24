/* Calculates the face value of a word in Scrabble*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i, sum = 0, facevalue[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	char ch;

	printf("Enter a word: ");
	while ((ch = getchar()) != '\n') {
		ch = toupper(ch);
		i = ch - 'A';
		if (i >= 0 && i < 26) {
			sum += facevalue[i];
		}
	}

	printf("Scrabble value: %d\n", sum);

	return 0;
}
