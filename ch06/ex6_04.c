#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < 10; ++i) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i++ < 10;) {
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}