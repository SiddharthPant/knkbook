/*
 * 0903_random_walk.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

/* Creates a random walk */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 10
#define NUM_COLUMNS	10
#define NUM_ALPHABETS 26

int main(void)
{
	bool check[4] = {true, true, true, true};
	int i, j, m, way = 0;
	char ch = 'A', grid[NUM_ROWS][NUM_COLUMNS];

	srand((unsigned) time(NULL));

	for (i = 0; i < NUM_ROWS; i++) {
		for(j = 0; j < NUM_COLUMNS; j++) {
			grid[i][j] = '.';
		}
	}
	i = 0; j = 0;
	for (;;) {
		// Choose a random direction
		way = rand() % 4;
		// All condition are for limiting the actions within the grid
		if (i >= 0) {
			if (i < NUM_ROWS){
				if (j >= 0) {
					if (j < NUM_COLUMNS) {
						if (check[m] && grid[i][j] == '.')
							grid[i][j] = ch++;
						// Reset the available direction checking array
						for (int l = 0; l < 3; l++) check[l] = true;
						if (grid[i - 1][j] != '.') check[0] = false;
						else check[0] = true;
						if (grid[i + 1][j] != '.') check[1] = false;
						else check[1] = true;
						if (grid[i][j - 1] != '.') check[2] = false;
						else check[2] = true;
						if (grid[i][j + 1] != '.') check[3] = false;
						else check[3] = true;
						switch (way) {
							case 0: if (check[0]) --i; m = 0; break;		// UP
							case 1: if (check[1]) ++i; m = 1; break;		// DOWN
							case 2: if (check[2]) --j; m = 2; break;		// LEFT
							case 3: if (check[3]) ++j; m = 3; break;		// RIGHT
						}
					} else --j;
				} else ++j;
			} else --i;
		} else ++i;
		if (ch > 'Z') break; // If exceeds the alphabet Z then terminate
		if (grid[i - 1][j] != '.' && grid[i + 1][j] != '.' && grid[i][j - 1] != '.' && grid[i][j + 1] != '.')
			break; // terminates when no way is available

	}

	for (i = 0; i < NUM_ROWS; i++) {
		for(j = 0; j < NUM_COLUMNS; j++) {
			printf("%c ", grid[i][j]);
		}
		printf("\n");
	}
	return 0;
}
