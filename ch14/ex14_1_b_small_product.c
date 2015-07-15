#include <stdio.h>
#include <stdlib.h>

/* 
 * I changed it a little bit to use this in a printf call. You can just as well
 * use bool values by including the stdbool.h library to make it according to
 * the book.
 */
#define SMALL_PRODUCT(x, y) ((((x) * (y)) < 100) ? "True" : "False" )

int main(int argc, char **argv)
{
	int i = atoi(argv[1]), j = atoi(argv[2]);
	printf("%s\n", SMALL_PRODUCT(i, j));
	return 0;
}