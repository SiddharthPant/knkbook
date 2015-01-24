/*
 * =====================================================================================
 *
 *       Filename:  random30.c
 *
 *    Description:  Generates 30 nos. randomly between 0 to 30
 *
 *        Version:  1.0
 *        Created:  19.2.14 03:29:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siddharth Pant (sid), 
 *   Organization:  Self
 *
 * =====================================================================================
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define COUNT 720            /* No. of random nos. to print */
#define UPPER_RANGE 40            /* Range of temperature */
#define LOWER_RANGE 30            /*  */

int main(void)
{
    int i = 0, n;

    srand((unsigned) time(NULL));

    while (i <= COUNT) {
        n = rand() % UPPER_RANGE;
        if ( n > LOWER_RANGE ) {
            printf ( "%d\n", n );
            i++;
        } 
    }
    
    return 0;
}
