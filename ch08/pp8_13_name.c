#include <stdio.h>

int main(void)
{
	char ch, initial, last_name[20];
	int i = 0, count = 0;

	printf("Enter a first and last name: ");
	while ((ch = getchar()) == ' ') // Ignores initial spaces
		/* NULL statement */;
	initial = ch;
	while ((ch = getchar()) != ' ') // Ignores charachters after the initial
		/* NULL statement */;
	while ((ch = getchar()) == ' ') // Ignores spaces after the first word
		/* NULL statement */;
	last_name[i] = ch;				// First charachter of last name
	while ((ch = getchar()) != ' ' && ch != '\n') {
		last_name[++i] = ch;
		count++;
	}
	for (i = 0; i <= count; i++) {	// count is no. of letters in last name - 1
		printf("%c", last_name[i]);
	}
	printf(", %c\n", initial);

	return 0;
}
