#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
#define N 10

int main(void)
{
	char s[N];
	int i;
	
	strcpy(s, "abcd");
	i = 0;
	putchar(TOUPPER(s[++i]));
	
	printf("\n");
	
	strcpy(s, "0123");
	i = 0;
	putchar(TOUPPER(s[++i]));
	
	return 0;
}
