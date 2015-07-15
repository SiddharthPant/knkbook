#include <stdio.h>

#define LEN 50

char* censor(char*, int);

int main(void)
{
	char str[LEN];
	
	printf("Enter some characters: ");
	gets(str);
	
	censor(str, LEN);
	
	printf("Censored: %s\n", str);
	
	return 0;
}

char* censor(char *str, int n)
{
	char *p;
	for (p = str; p < str + n && *p != '\0'; p++)
		if (p[0] == 'f' && p[1] == 'o' && p[2] == 'o')
			p[0] = p[1] = p[2] = 'x';
	return str;
}