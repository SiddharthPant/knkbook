#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 10
#define NUM_COLUMNS 10
#define NUM_ALPHABETS 26

void generate_random_walk(char [][NUM_COLUMNS]);
void print_array(char [][NUM_COLUMNS]);
bool inside_array(int, int);
bool is_empty(char [][NUM_COLUMNS], int, int);

int main(void)
{
	char walk[NUM_ROWS][NUM_COLUMNS];
	int i, j;

	for (i = 0; i < NUM_ROWS; i++) {
		for(j = 0; j < NUM_COLUMNS; j++) {
			walk[i][j] = '.';
		}
	}

	generate_random_walk(walk);

	print_array(walk);

	return EXIT_SUCCESS;
}

void generate_random_walk(char walk[NUM_ROWS][NUM_COLUMNS])
{
	char ch = 'A';
	bool change_way = false;
	srand((unsigned) time(NULL));
	int i = 0, j = 0, k, temp_i, temp_j, way;

	while ( ch <= 'Z' ) {
		if (!change_way) {
					walk[i][j] = ch++;
		}
		temp_i = i; temp_j = j;
		way = rand() % 4;
		// Move i and j temporarily based on value of way

		for (k = 0; k < 4; k++) {
			switch (way) {
				case 0: temp_i++; break;	// Down
				case 1: temp_j++; break;	// Right
				case 2: temp_i--; break;	// Up
				case 3: temp_j--; break;	// Left
			}
			// We will change direction if i and j out of bound or block is not empty either is true
			if ( inside_array(temp_i, temp_j) ) {
				if ( is_empty(walk, temp_i, temp_j) ) {
					change_way = false;
					break;
				} else change_way = true;
			} else {
				change_way = true;
			}
			if (change_way) {
				temp_i = i; temp_j = j;	// Reset temp_i and temp_j
				way++;					// Change the direction
				if (way == 4) way = 0;	// Never let way be > 3
			}
		}
		if (k == 4) return; // k = 4 means the for loop above ran 4 times but no direction is left.
		// Since we have checked everything we can now make the move
		i = temp_i; j = temp_j;
	}
}

bool inside_array(int i, int j) {
	if (i < 0 || i >= NUM_ROWS || j < 0 || j >= NUM_COLUMNS) return false;
	else return true;
}

bool is_empty(char walk[NUM_ROWS][NUM_COLUMNS], int i, int j) {
	if (walk[i][j] == '.') return true;
	else return false;
}

void print_array(char walk[NUM_ROWS][NUM_COLUMNS])
{
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLUMNS; j++)
			printf(" %c", walk[i][j]);
    printf("\n");
  }
}

