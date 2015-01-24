/* Reverses a sentence */
#include <stdio.h>

#define N 40

int main(void)
{
	char ch, line_array[N], end_char;
	int i = 0, j, old_i;
	
	printf("Enter a sentence: ");
	// Loop will stop at appearance of '?', '!' or '.'
	while (((ch = getchar()) != '?') && (ch != '!') && (ch != '.')) {
		line_array[i] = ch;
		i++; // At the end i will be the index of ' ' before the word
	}
	end_char = ch; // termination character is stored separately
	printf("Reversal of sentence:");
	while (i >= 0) {
		old_i = --i;
		while (line_array[i] != ' ' && i >= 0) { // Goes to beginning of word
			--i;
		}
		printf(" ");
		for (j = i + 1; j <= old_i; j++) {
			printf("%c", line_array[j]);
		}
	}
	printf("%c", end_char);
	
	return 0;
}
