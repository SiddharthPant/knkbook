/*
 * 0919mystery.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

#include <stdio.h>

void pb(int);

int main(void)
{
	int n;

	printf("Enter a no.: ");
	scanf("%d", &n);

	pb(n);

	return 0;
}

void pb(int n)
{
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}
}
