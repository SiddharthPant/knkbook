#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define N 26

void read_word(int []);
bool equal_array(int [], int []);

int main(void)
{
	int counts1[N], counts2[N];
	
	printf("Enter first word: ");	
	read_word(counts1);
	printf("Enter second word: ");	
	read_word(counts2);

	if (equal_array(counts1, counts2)) 
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}

void read_word(int counts[N])
{
	char ch;
	int i;
	for (i = 0; i < N; i++)
		counts[i] = 0;
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			++counts[ch - 'a'];
		}
	}
}

bool equal_array(int counts1[N], int counts2[N])
{
	int i;
	for (i = 0; i < N; i++) {
		counts1[i] -= counts2[i];
	}
	for (i = 0; i < N; i++)
		if (counts1[i] != 0) return false;
	return true;
}
