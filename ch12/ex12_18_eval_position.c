#include <stdio.h>

int evaluate_position(char [][8]);

int main(void)
{
	char board[8][8] = {{'x', 'x', 'x', 'x', 'r', 'r', 'k', 'x'},
					    {'p', 'p', 'p', 'x', 'x', 'x', 'x', 'p'},
					    {'x', 'x', 'x', 'x', 'x', 'x', 'p', 'x'},
					    {'x', 'x', 'x', 'x', 'x', 'b', 'q', 'x'},
					    {'x', 'x', 'P', 'x', 'x', 'x', 'x', 'x'},
					    {'x', 'P', 'x', 'x', 'x', 'x', 'P', 'x'},
					    {'P', 'Q', 'x', 'x', 'x', 'P', 'x', 'P'},
					    {'R', 'x', 'x', 'x', 'K', 'x', 'x', 'R'}};
	int points;
	points = evaluate_position(board);

	printf("points are %d\n", points);
	return 0;
}

int evaluate_position(char board[][8])
{
	char *p;
	int white_sum = 0, black_sum = 0;
	
	for (p = board[0]; p < board[0] + 64; p++) {
		switch (*p) {
			case 'K': 	white_sum += 0;
						break;
			case 'Q': 	white_sum += 9;
						break;
			case 'R': 	white_sum += 5;
						break;
			case 'B': 	white_sum += 3;
						break;
			case 'N': 	white_sum += 3;
						break;
			case 'P': 	white_sum += 1;
						break;
			case 'k':	black_sum += 0;
						break;
			case 'q':	black_sum += 9;
						break;
			case 'r':	black_sum += 5;
						break;
			case 'b':	black_sum += 3;
						break;
			case 'n':	black_sum += 3;
						break;
			case 'p':	black_sum += 1;
						break;
			case default: break;
		}
	}
	
	return white_sum - black_sum;
}