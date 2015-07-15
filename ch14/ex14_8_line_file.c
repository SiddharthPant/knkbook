#include <stdio.h>

// First we need a macro that can stringify anything for us
#define S(x) #x
/*
 * But this would give us "__LINE__" instead of "10" where 10
 * is the line no. where __LINE__ is written. This is because
 * of the # operator which prevents a macro argument to expand.
 * So we require another macro that passes the expanded
 * argument to S. STRINGIFY(__LINE__) becomes STRINGIFY(10)
 * which creates S(10) which then stringify it to "10"
 */
#define STRINGIFY(x) S(x)
// And now finally we can create our required macro
#define LINE_FILE "Line "STRINGIFY(__LINE__)" of "STRINGIFY(__FILE__)

int main(void)
{
	const char *str = LINE_FILE;
	printf("%s\n", str);
	return 0;
}
