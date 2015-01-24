/*Sums a no. to a list of nos.*/
#include <stdio.h>

#define DIFF 3

int main(int argc, char const *argv[])
{
	int n; 

	printf("Adding %d to every no. in the file.\n", DIFF);

	scanf("%d", &n);
	while (n != 0) {
		printf("%d\n", n + 3);
		scanf("%d", &n);
	}
	printf("Done");
	return 0;
}