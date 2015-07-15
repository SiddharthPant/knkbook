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
	int i, j, way = 0;
	char ch = 'A', grid[NUM_ROWS][NUM_COLUMNS];
	
	srand((unsigned) time(NULL));
	
	for (i = 0; i < NUM_ROWS; i++) {
		for(j = 0; j < NUM_COLUMNS; j++) {
			grid[i][j] = '.';
		}
	}
	i = 0; j = 0;
	for (;;) {
		way = rand() % 4; printf("rand ");
		if (i >= 0) {
			if (i < NUM_ROWS){
				if (j >= 0) {
					if (j < NUM_COLUMNS) {
						grid[i][j] = ch++; printf("ch++ ");
						if (grid[i - 1][j] != '.') check[0] = false;
						else check[0] = true;
						if (grid[i + 1][j] != '.') check[1] = false;
						else check[1] = true;
						if (grid[i][j - 1] != '.') check[2] = false;
						else check[2] = true;
						if (grid[i][j + 1] != '.') check[3] = false;
						else check[3] = true;
						for (i = 0; i < 4; i++) printf("%d", check[i]);
						switch (way) {
							case 0: if (check[0]) --i;		// UP
							case 1: if (check[1]) ++i;		// DOWN
							case 2: if (check[2]) --j;		// LEFT
							case 3: if (check[3]) ++j;		// RIGHT
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
