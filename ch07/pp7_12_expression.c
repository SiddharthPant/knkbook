#include <stdio.h>

int main(void)
{
	float a, b, c, result;
	char symbol1, symbol2;

	printf("Enter an expression: ");
	
	scanf("%f %c %f %c %f", &a, &symbol1, &b, &symbol2, &c);
	
	switch (symbol1) {
		case '+': result = a + b; break;
		case '-': result = a - b; break;
		case '*': result = a * b; break;
		case '/': result = a / b; break;
		default : printf("Invalid Operation symbol %c!", symbol1);
				  return 0;
	}
	a = result;
	b = c;
	switch (symbol2) {
		case '+': result = a + b; break;
		case '-': result = a - b; break;
		case '*': result = a * b; break;
		case '/': result = a / b; break;
		default : printf("Invalid Operation symbol %c!", symbol2);
				  return 0;
	}

	printf("Value of expression: %.1f", result);
	return 0;
}
