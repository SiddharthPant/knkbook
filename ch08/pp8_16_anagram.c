#include <ctype.h>
#include <stdio.h>


int main(void)
{
	char ch;
	int i, counter[26] = {0};
	
	printf("Enter first word: ");
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			++counter[ch - 'a'];
		}
	}
	printf("Enter second word: ");
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			--counter[(int) (ch - 'a')];
		}
	}
	for (i = 0; i < 26; i++) {
		if (counter[i] != 0) break;
	}
	
	if (i == 26) {
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}
	
	return 0;
}
