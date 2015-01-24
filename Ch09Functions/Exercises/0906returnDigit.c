/*
 * 0906returnDigit.c
 *
 *  Created on: 11-Aug-2014
 *      Author: Sid
 */

#include <stdio.h>

int digit(int, int);

int main(void)
{
	int number = 1298765, i = 6;

	printf("In %d the no at place %d is %d", number, i, digit(number, i));

	return 0;
}

int digit(int number, int i)
{
	int iDigit;

	while ( i > 0 ) {
		iDigit = number % 10;
		number = number / 10;
		i--;
	}

	return iDigit;
}
