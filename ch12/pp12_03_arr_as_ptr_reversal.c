#include <stdio.h>

#define MSG_SIZE 50

int main(void)
{
	char message[MSG_SIZE], *p = message;
	
	printf("Enter a message: ");
	// store message one charachter at a time till the array is full or till a
	// newline character. Its quite a clever one with only one statement
	// comprising the whole while loop doing everything we need.
	while( p < message + MSG_SIZE && (*p++ = getchar()) != '\n');
	
	for (--p; p >= message; p--) {
		printf("%c", *p);
	}
	printf("\n");
	
	return 0;
}