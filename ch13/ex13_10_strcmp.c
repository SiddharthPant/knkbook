#include <stdio.h>

int my_strcmp(char *s, char *t);

int main(void)
{
	char s1[20] = "computer";
	char s2[10] = "science";
	
	printf("%d\n", my_strcmp(s1, s2));
	
	return 0;
}

int my_strcmp(char *s, char *t)
{
	while (*s == *t) {
		if (*s++ == '\0')
			return 0;
		t++;
	}
	return *s - *t;
	
}