#include <stdio.h>

int count_spaces(const char s[]);

int main(void)
{
	char *str = "You can't cage a swallow can you?";
	printf("%d\n", count_spaces(str));
	return 0;
}

int count_spaces(const char s[])
{
	int count = 0;
	while (*s)
		if (*s++ == ' ') count++;
	return count;
}