/* Generates and stores Fibonacci series */
#include <stdio.h>

#define LENGTH 40            /* fib_numbers array length */

int main(void)
{
    int fib_numbers[LENGTH] = {0, 1}, i;

    for ( i = 2; i < LENGTH ; i++ ) {
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
    }

    for ( i = 0; i < LENGTH ; i++ ) {
        printf ( "%d ", fib_numbers[i] );
    }
    printf ( "\n" );

    return 0;
}
