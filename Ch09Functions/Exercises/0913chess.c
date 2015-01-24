/*
 * 0913chess.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

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

	printf("points are %d", points);
	return 0;
}

int evaluate_position(char board[8][8])
{
	char blackPieces[6] = "kqrbnp", whitePieces[6] = "KQRBNP";
	int black = 0, white = 0, empty = 0, i, j, k, pieceValue[6] = {0, 9, 5, 3, 3, 1};

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			for (k = 0; k < 6; k++)
				if (board[i][j] == blackPieces[k]) {
					empty = 0;
					break;
				}
				else
					empty = 1;
			if (empty != 1)
				black += pieceValue[k];
		}
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			for (k = 0; k < 6; k++)
				if (board[i][j] == whitePieces[k]) {
					empty = 0;
					break;
				}
				else
					empty = 1;
			if (empty != 1)
				white += pieceValue[k];
		}
	}

	return white - black;
}
