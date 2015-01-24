#include <stdio.h>

#define LENGTH 50

int main(void)
{
	char ch, end_character, sentence[LENGTH];
	int i = 0, old_i;

	// Input loop stops at a terminating character
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '.' && ch != '?' && ch != '!') {
		sentence[i++] = ch;
	}
	putchar(ch);
	end_character = ch;
	// Output loop
	printf("Reversal of sentence:%d", i);
	for (--i; i >= 0; i--) { // Runs from i - 1 to 0
		old_i = i;
		printf("old_i = %d", old_i);
		while ((ch = sentence[i--]) != ' ')	// Moves i to the position of beginning of last word.
			/* Null statement */printf("(begin %d)", i);
		for (; i < old_i; i++) {
			printf("%c (%d)", sentence[++i], i);
		}
		--i;
		printf("(end%d)", i);
	}
	printf("%c\n", end_character);

	return 0;
}
