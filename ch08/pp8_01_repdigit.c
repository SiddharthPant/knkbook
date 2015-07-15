/* Checks numbers for repeated digits */

#include <stdbool.h>	/* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int i = 0, digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

    printf ( "Repeated digit (s): " );
	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
            printf ( "%d ", digit );
            i++;
        }
		digit_seen[digit] = true;
		n /= 10;
	}
    if (i == 0)
        printf ( "No repeated digits" );
    printf ( "\n" );

	return 0;
}
