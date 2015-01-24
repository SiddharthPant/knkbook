#include <ctype.h>
#include <stdio.h>


int main(void)
{
	char ch;
	int i, counter[26] = {0};
	
	printf("Enter first word: ");
	read_word(counts1);
	
	printf("Enter second word: ");
	read_word(counts2);
	
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

void read_word(int counts[26])
{
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			++counter[ch - 'a'];
		}
	}
}
