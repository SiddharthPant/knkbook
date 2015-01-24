#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	char ch = 'y';
	int wins = 0, losses = 0;
	srand((unsigned) time(NULL));

	while ('y' == tolower(ch)) {
		if (play_game()) {
			printf("You win!\n");
			wins++;
		} else {
			printf("You lose!\n");
			losses++;
		}
		printf("Play again? ");
		ch = getchar();
		getchar();
	}

	printf("Wins: %d Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice(void)
{
	int dice_1, dice_2;


	dice_1 = 1 + (rand() % 6);
	dice_2 = 1 + (rand() % 6);

	return dice_1 + dice_2;
}

bool play_game(void)
{
	int roll = roll_dice(), point;
	printf("You rolled: %d\n", roll);
	if (roll == 7 || roll == 11)
		return true;
	else if (roll == 2 || roll == 3 || roll == 12)
		return false;
	else {
		printf("Your point is %d\n", roll);
		while (1) {
			point = roll_dice();
			printf("You rolled: %d\n", point);
			if (7 == point)
				return false;
			else if (roll == point)
				return true;
		}
	}
	return false;
}

