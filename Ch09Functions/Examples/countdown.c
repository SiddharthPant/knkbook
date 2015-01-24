/*
 * countdown.c
 *
 *  Created on: 08-Aug-2014
 *      Author: sidpa_000
 * Description: Prints a Countdown
 */

#include <stdio.h>

void print_count(int n)
{
	printf("T minus %d and counting\n", n);
	fflush(stdout);
}

int main(int argc, char **argv) {
	int i;

	for (i = 10; i > 0; --i) {
		print_count(i);
	}

	return 0;
}
