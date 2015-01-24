/* Include the standard I/O library */
#include<stdio.h>
/* Include the time library */
#include<time.h>
/* Include the standard C library */
#include<stdlib.h>

/* Define main */
int main(void) {

    /* Declare a 10x10 array of characters, initializing it to '.' */
    char array[10][10] = {
    {'A', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    };

    /* Declare the loop counters, as well as the direction */
    unsigned short int i, j, dir, x = 0, y = 0;

    /* Declare a placeholder for the current character, initially 'A'*/
    char c = 'A';

    /*
	 *
     * Seed the current time as the initial value for the random numbers
     * generator
     */
    srand((unsigned) time(NULL));

    /*
	 *
     * As long as the current character isn't Z (the last letter of the
     * alphabet), keep moving randomly across the array
     */
    while(c != 'Z') {

        /*
		 *
         * Get the remainder of a random number divided by 4 and use it as
         * the direction of the next move
         */
        dir = rand() % 4;

        /*
		 *
         * Directions:
         *  0 -- up
         *  1 -- right
         *  2 -- down
         *  3 -- left
         */
        if(dir == 0) {
            /* If everything's OK, make the move */
            if(x - 1 >= 0 && array[x - 1][y] == '.') {

                array[--x][y] = ++c;
            } else { /* Otherwise, try the next direction */

                dir = 1;
            }
        }

        if(dir == 1) {
            /* If everything's OK, make the move */
            if(y + 1 < 10 && array[x][y + 1] == '.') {

                array[x][++y] = ++c;
            } else { /* Otherwise, try the next direction */

                dir = 2;
            }
        }

        if(dir == 2) {
            /* If everything's OK, make the move */
            if(x + 1 < 10 && array[x + 1][y] == '.') {

                array[++x][y] = ++c;
            } else { /* Otherwise, try the next direction */

                dir = 3;
            }
        }

        if(dir == 3) {
            /* If everything's OK, make the move */
            if(y - 1 >= 0 && array[x][y - 1] == '.') {

                array[x][--y] = ++c;
            } else { /* Otherwise, try the next direction */

                dir = 1;
            }
        }
    }

    /* Print the multi-dimensional array */
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {

            printf(" %c ", array[i][j]); /* Print the current
character */
        }

        printf("\n"); /* Print a new line */
    }

    /* Return 0 upon success */
    return 0;
}