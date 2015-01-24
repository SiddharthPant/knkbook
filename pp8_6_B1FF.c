/* B1FF Filter */
#include <stdio.h>
#include <stdlib.h>

#define N 40

int main(void)
{
	int i = 0;
	char ch, message[N];
	
	printf("Enter message: ");
	while ((ch = getchar()) != '\n') {  // Input loop breaks on encountering '\n' or
		message[i] = toupper(ch);		// Exceeding Max array length
		if (i == N) break;
		i++;
	}
	
	while (i < N) {					    // Fills up the rest with a '!' character
		message[i] = '!';
		i++;
	}
	
	printf("In B1FF-speak: ");
	for (i = 0; i < N; i++) {			// Substitutes the corresponding B1FF character
		switch (message[i]) {			// And prints it.
			case 'A': message[i] = '4';
					break;
			case 'B': message[i] = '8';
					break;
			case 'E': message[i] = '3';
					break;
			case 'I': message[i] = '1';
					break;
			case 'O': message[i] = '0';
					break;
			case 'S': message[i] = '5';
					break;
			default: 
					break;
		}
		printf("%c", message[i]);
	}
	printf("\n");
	
	return 0;
}