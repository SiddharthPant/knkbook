#include <stdio.h>

#define MAX_DIGITS 10
#define NUM_ROWS 3

char digits[NUM_ROWS][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	int position = 0;
	char c;
	clear_digits_array();

	printf("Enter a number: ");
	scanf("%c", &c);
	while (c != '\n' && position < MAX_DIGITS) {
		switch (c) {
			case '0': 	process_digit(0, position);
						break;
			case '1': 	process_digit(1, position);
						break;
			case '2': 	process_digit(2, position);
						break;
			case '3': 	process_digit(3, position);
						break;
			case '4': 	process_digit(4, position);
						break;
			case '5': 	process_digit(5, position);
						break;
			case '6': 	process_digit(6, position);
						break;
			case '7': 	process_digit(7, position);
						break;
			case '8': 	process_digit(8, position);
						break;
			case '9': 	process_digit(9, position);
						break;
			default :	position--;
						break;
		}
		scanf("%c", &c);
		position++;
	}

	print_digits_array();

	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			digits[i][j] = ' ';
		}
	}
}

void process_digit(int digit, int position)
{
	int actual_position = position * 4;
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             	 {0, 1, 1, 0, 0, 0, 0},
                             	 {1, 1, 0, 1, 1, 0, 1},
                             	 {1, 1, 1, 1, 0, 0, 1},
                             	 {0, 1, 1, 0, 0, 1, 1},
                             	 {1, 0, 1, 1, 0, 1, 1},
                             	 {1, 0, 1, 1, 1, 1, 1},
                             	 {1, 1, 1, 0, 0, 0, 0},
                             	 {1, 1, 1, 1, 1, 1, 1},
                             	 {1, 1, 1, 1, 0, 1, 1}};
    if (segments[digit][0])
    	digits[0][actual_position + 1] = '_';
    if (segments[digit][1])
    	digits[1][actual_position + 2] = '|';
    if (segments[digit][2])
    	digits[2][actual_position + 2] = '|';
    if (segments[digit][3])
    	digits[2][actual_position + 1] = '_';
    if (segments[digit][4])
    	digits[2][actual_position] = '|';
    if (segments[digit][5])
    	digits[1][actual_position] = '|';
    if (segments[digit][6])
    	digits[1][actual_position + 1] = '_';
}

void print_digits_array(void)
{
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
}
