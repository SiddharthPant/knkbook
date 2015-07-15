#include <stdio.h>
#include <string.h>

#define LEN 20

int readline(char* word);

int main(void)
{
	char word[LEN + 1], smallest[LEN + 1], largest[LEN + 1];
	
	printf("Enter word: ");
	readline(word);
	strcpy(smallest, word);
	strcpy(largest, word);
	while (strlen(word) != 4) {
		if (strcmp(word, smallest) < 0)
			strcpy(smallest, word);
		if (strcmp(word, largest) > 0)
			strcpy(largest, word);
		printf("Enter word: ");
		readline(word);
	}
	
	printf("Smallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);
	
	return 0;
}

int readline(char *word)
{
	int i;
	for (i = 0; (word[i] = getchar()) != '\n'; i++);
	word[i] = '\0';
	
	return --i;
}