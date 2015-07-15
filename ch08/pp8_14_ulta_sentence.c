#include <stdio.h>

#define LEN 80

int main(void) {
	char ch, msg[LEN], end_ch;
	int i = 0, end_position, j;

	printf("Enter a sentence: ");
	while (i < LEN && (ch = getchar()) != '.' && ch != '?' && ch != '!')
		msg[i++] = ch;
	end_ch = ch;

	printf("Reversal of sentence: ");
	while (i >= 0) {
		end_position = i;
		while (i >= 0 && msg[--i] != ' ');
		for (j = i + 1; j < end_position; j++)
			printf("%c", msg[j]);
		if (i >= 0)	// separate words with a space except the last word.
			printf(" ");

	}
	printf("%c\n", end_ch);

	return 0;
}