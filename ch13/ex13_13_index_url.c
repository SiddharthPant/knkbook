#include <stdio.h>
#include <string.h>

#define URL_LEN 50

void build_index_url(const char *domain, char *index_url);

int main(int argc, char **argv) 
{
	char index_url[URL_LEN];
	build_index_url(argv[1], index_url);
	
	printf("%s\n", index_url);
	
	return 0;
}

void build_index_url(const char* domain, char* index_url)
{
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}