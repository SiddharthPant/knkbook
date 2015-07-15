/* Computes & Displays a function with one arguement */
#include <math.h>
#include <stdio.h>

#define DISP(f,x) printf(#f"(%g) = %g\n", (x), f(x));
#define DISP2(f,x,y) 	printf(#f"(%g) = %g\n", (x), f(x)); \
						printf(#f"(%g) = %g\n", (y), f(y));

int main(void)
{
	DISP(sqrt, 3.0);
	DISP2(sqrt, 4.0, 88.0);
	
	return 0;
}
