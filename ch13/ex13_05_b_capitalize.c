#include <stdio.h>
#include <ctype.h>

#define LEN 50

char* capitalize(char *, int);

int main(void)
{
	char str[LEN];
	
	printf("Enter some characters: ");
	gets(str);
	
	capitalize(str, LEN);
	
	printf("Capitalized: %s\n", str);
	
	return 0;
}

char* capitalize(char *str, int n)
{
	for (char *p = str; p < str + n && *p != '\0'; p++)
		*p = toupper((int) *p);
	
	return str;
}