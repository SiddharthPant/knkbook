#include <stdio.h>
#include <string.h>

#define URL_LEN 50

void remove_filename(char* url);

int main(int argc, char **argv) 
{
	char url[URL_LEN];
	strcpy(url, argv[1]);
	remove_filename(url);
	
	printf("%s\n", url);
	
	return 0;
}

void remove_filename(char *url)
{
	char *p = url;
	while (*p)
		p++;
	while (*p != '/')
		p--;
	*p = '\0';
}