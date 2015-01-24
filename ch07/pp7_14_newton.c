#include <math.h>
#include <stdio.h>

int main(void)
{
	double x, y = 1, new_y = 0;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	for (;;) {
		new_y = (y + x / y) / 2;
		if (fabs(y - new_y) < (.00001 * y)) break;
		y = new_y;
	}
	printf("Square root: %f", new_y);

	return 0;
}
