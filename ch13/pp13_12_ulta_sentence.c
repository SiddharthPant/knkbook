/* Reverses the words of a sentence */

#include <stdio.h>

#define NUM_WORD 30
#define LEN 20

char* readline(char **s);

int main(void) {
	char msg[NUM_WORD][LEN + 1], *end_position, *p;

	printf("Enter a sentence: ");
	p = end_position = readline(msg);

	printf("Reversal of sentence: ");
	while (p >= *msg) {
		printf("%s", p);
		if (p != *msg)
			printf(" ");
		p--;
	}
		
	printf("%s\n", end_position);

	return 0;
}

char* readline(char s[][LEN + 1])
{
	char *p = *s, ch;
	while ((ch = getchar()) != '.' && ch != '?' && ch != '!' && ch != '\n') {
		if (ch != ' ') {
			*p++= ch;
		} else {
			*p = '\0';	// terminate the current word
			p = *++s;	// point p to the next string in s
		}
	}
	if (ch != '\n')
		sprintf(p, "%c", ch);
	
	return p;
}