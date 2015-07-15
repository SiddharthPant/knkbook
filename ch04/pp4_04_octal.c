#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, d1, d2, d3, d4, d5, octal_no;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	d1 = num % 8;
	num = num / 8;
	d2 = num % 8;
	num = num / 8;
	d3 = num % 8;
	num = num / 8;
	d4 = num % 8;
	num = num / 8;
	d5 = num % 8;
	octal_no = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;

	printf("In octal, your number is: %.5d\n", octal_no);

	return 0;
}