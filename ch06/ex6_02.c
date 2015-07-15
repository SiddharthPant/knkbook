#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 9384;
	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);
	return 0;
}