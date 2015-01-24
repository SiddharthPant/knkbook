/* Calculates the face value of a word in Scrabble*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int face_value, sum = 0;
	char ch;

	printf("Enter a word: ");
	while ((ch = getchar()) != '\n') {
		ch = toupper(ch);
		switch (ch) {
			case 'A': case 'E': case 'I': case 'L':
		   	case 'N': case 'O': case 'R': case 'S':
			case 'T': case 'U':
				face_value = 1;
				break;
			case 'D': case 'G':
				face_value = 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				face_value = 3;
				break;
			case 'F': case 'H': case 'V': case 'W':
			case 'Y':
				face_value = 4;
				break;
			case 'K':
				face_value = 5;
				break;
			case 'J': case 'X':
				face_value = 8;
				break;
			case 'Q': case 'Z':
				face_value = 10;
				break;
			default: printf("%c is an invalid charachter.\n", ch);
		}
		sum += face_value;
	}

	printf("Scrabble value: %d\n", sum);

	return 0;
}
