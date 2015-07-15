#include <stdio.h>

int main(int argc, char **argv)
{
	char **p;
	for (p = argv; *p != NULL; p++);
	while (--p > argv)
		printf("%s ", *p);
	printf("\n");
	return 0;
}