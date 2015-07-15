#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(int argc, char **argv)
{
	char extension[4];
	
	get_extension(argv[1], &extension);
	
	if (*extension == '\0')
		printf("File has no extension!");
	else
		printf("Its a .%s file\n", extension);
	
	return 0;
}

void get_extension(const char* file_name, char* extension)
{
	char *p = file_name + strlen(file_name);
	
	while (--p > file_name && *p != '.');
	
	if (p == file_name) {
		extension[0] = '\0';
		return;
	}
	
	strcpy(extension, &p[1]);
}