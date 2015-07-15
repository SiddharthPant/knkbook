#include <stdio.h>
#include <ctype.h>

#define LEN 50

void capitalize(char [], int);

int main(void)
{
	char str[LEN];
	
	printf("Enter some characters: ");
	gets(str);
	
	capitalize(str, LEN);
	
	printf("Capitalized: %s\n", str);
	
	return 0;
}

void capitalize(char str[], int n)
{
	int i;
	for (i = 0; i < n && str[i] != '\0'; i++)
		str[i] = toupper((int) str[i]);
}