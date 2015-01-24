/*
 * 0906returnDigitWeb.c
 *
 *  Created on: 11-Aug-2014
 *      Author: Sid
 */

#include <stdio.h>

int digit(int, int);

int main(void)
{
	int n = 1298765, k = 6;

	printf("In %d the no at place %d is %d", n, k, digit(n, k));

	return 0;
}

int digit(int n, int k)
{
	int i;

	for (i = 1; i < k; i++)
		n /= 10;

	return n % 10;
}
