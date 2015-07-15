/* Computes the average word length of a given sentence. */

#include <stdio.h>
#include <string.h>

#define LEN 80

int count_spaces(const char *s);
double compute_average_word_length(const char* sentence);

int main(void)
{
	char sentence[LEN];
	double wlength_avg;
	
	printf("Enter a sentence: ");
	gets(sentence);
	
	wlength_avg = compute_average_word_length(sentence);
	
	printf("Average word length: %.1f\n", wlength_avg);

	return 0;
}

/* Counts the no. of strings in the string s*/
int count_spaces(const char *s)
{
	int count = 0;
	while (*s)
		if (*s++ == ' ') count++;
	return count;
}

/* Gives the average word length of string in the array sentence
 * letter count is length of sentence minus no. of spaces while
 * no. of spaces is one more than no. of spaces in a sentence.
 * dividing both these quantities gives us the required word length
 */
double compute_average_word_length(const char *sentence)
{
	return (double) (strlen(sentence) - count_spaces(sentence)) / (double) (count_spaces(sentence) + 1) ;
}