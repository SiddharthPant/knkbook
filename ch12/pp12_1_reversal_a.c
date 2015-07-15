#include <stdio.h>

#define MSG_SIZE 50

int main(void)
{
	char message[MSG_SIZE + 1];
	int i = 0;
	
	printf("Enter a message: ");
	// store message one character at a time till the array is full or till a
	// newline character. Its quite a clever one with only one statement
	// comprising the whole while loop doing everything we need.
	while( i < MSG_SIZE && (message[i++] = getchar()) != '\n');
	
	for (--i; i >= 0; i--) {
		printf("%c", message[i]);
	}
	printf("\n");
	
	return 0;
}