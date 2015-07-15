#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char ch;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d /%d %c %d /%d", &num1, &denom1, &ch, &num2, &denom2);

	switch (ch) {
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			printf("The sum is %d/%d\n", result_num, result_denom);
			break;
		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			printf("The subtraction is %d/%d\n", result_num, result_denom);
			break;
		case '*':
			printf("The Multiplication is %d/%d\n", num1 * num2, denom1 *denom2);
			break;
		case '/':
			printf("The Quotient is %d/%d\n", num1 * denom2, denom1 * num2);
			break;
		default:
			printf("Invalid operation symbol.");
	}
	
	return 0;
}
