#include <stdio.h>
#include <stdlib.h>

#define CUBE(x) ((x) * (x) * (x))

int main(int argc, char **argv)
{
	int i = atoi(argv[1]);
	printf("%d\n", CUBE(i));
	return 0;
}