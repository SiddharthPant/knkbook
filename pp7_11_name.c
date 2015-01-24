#include <stdio.h>

int main(void)
{
	char ch, initial;

	printf("Enter a first and last name: ");
	while ((ch = getchar()) == ' ') // Ignores initial spaces
		/* NULL statement */;
	initial = ch;
	while ((ch = getchar()) != ' ') // Ignores charachters after the initial
		/* NULL statement */;
	while ((ch = getchar()) == ' ') // Ignores spaces after the first word
		/* NULL statement */;
	printf("%c", ch);
	while ((ch = getchar()) != ' ' && ch != '\n') {
		printf("%c", ch);
	}
	printf(", %c\n", initial);

	return 0;
}
