#include <stdio.h>

#define LEN 80

int main(void) {
	char ch, msg[LEN], end_ch, *q, *p = msg, *end_position;

	printf("Enter a sentence: ");
	while (p < msg + LEN && (ch = getchar()) != '.' && ch != '?' && ch != '!')
		*p++ = ch;

	end_ch = ch;

	printf("Reversal of sentence: ");
	while (p >= msg) {
		end_position = p;
		while (--p >= msg && *p != ' ');
		for (q = p + 1; q < end_position; q++)
			printf("%c", *q);
		if (p >= msg)	// separate words with a space except the last word.
			printf(" ");

	}
	printf("%c\n", end_ch);

	return 0;
}