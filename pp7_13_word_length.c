#include <stdio.h>

int main(void)
{
	int letter_count = 0, word_count = 0;
	float wlength_avg;
	char ch;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n') {
		if(ch != ' ')
			++letter_count;
		else
			++word_count;
	}
	wlength_avg = (float) letter_count / ++word_count;
	
	printf("Average word length: %.1f\n", wlength_avg);

	return 0;
}
