#include <stdio.h>
#include <stdlib.h>

#define REMINDER(x) ((x) % 4)

int main(int argc, char **argv)
{
	int i = atoi(argv[1]);
	printf("%d\n", REMINDER(i));
	return 0;
}