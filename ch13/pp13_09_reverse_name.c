#include <stdio.h>
#include <string.h>

#define LEN 50

void readname(char* name);
void reverse(char* name);

int main(void)
{
	char name[LEN];

	printf("Enter a first and last name: ");
	readname(name);
	
	reverse(name);
	
	printf("%s\n", name);
	
	return 0;
}

void readname(char *name)
{
	while ((*name = getchar()) == ' ');	// Ignore space till 1st char and store the char in name array
	while ((*++name = getchar()) != ' ');	// runs till it gets a space and stores that too in the name array
	name++;
	while ((*name = getchar()) == ' ');	// Next 2 loops are doing the same thing for the 2nd part of the name string
	while ((*++name = getchar()) != '\n');
	*name = '\0';
}

void reverse(char *name)
{
	char temp_name[LEN], *p = name;
	int i = 0;
	while (*p != ' ')
		temp_name[i++] = *p++;
	temp_name[i] = '\0';
	strcpy(name, ++p);	// incremented p else it points to a space
	strcat(name, ", ");
	strcat(name, temp_name);
}