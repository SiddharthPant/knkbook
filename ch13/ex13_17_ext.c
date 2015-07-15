#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool test_extension(const char *file_name, const char *extension);

int main(int argc, char **argv)
{
	
	printf("%s\n", test_extension(argv[1], "TXT") ? "True" : "False");
	
	return 0;
}

bool test_extension(const char* file_name, const char* extension)
{
	char *p = file_name + strlen(file_name), i;
	char test_ext[strlen(extension) + 1];
	
	while (--p > file_name && *p != '.');
	
	if (p == file_name)
		test_ext[0] = '\0';
	else {
		strcpy(test_ext, &p[1]);
	}
	
	for (i = 0; i < strlen(extension); i++)
		if (toupper((int) test_ext[i]) != toupper((int) extension[i])) break;
	if (i == strlen(extension))
		return true;
	else
		return false;
	return false;
}