/* Checks numbers for repeated digits */

#include <stdbool.h>	/* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int i = 0, digit, digit_count[10] = {0};
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
            i++;
        }
		digit_seen[digit] = true;
        digit_count[digit] += 1;
		n /= 10;
	}
    if (i == 0)
        printf ( "No repeated digits" );
    else {
        printf ( "Digit:      " );
        for (i = 0; i < 10; i++)
            printf ( "%3d", i );
        printf ( "\nOccurences: " );
        for (i = 0; i < 10; i++) {
            printf ( "%3d", digit_count[i] );
        }
    }
    printf ( "\n" );

	return 0;
}
