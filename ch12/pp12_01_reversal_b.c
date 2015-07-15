#include <stdio.h>

#define MSG_SIZE 50

int main(void)
{
	char message[MSG_SIZE], *p = &message[0];
	
	printf("Enter a message: ");
	// store message one charachter at a time till the array is full or till a
	// newline character. Its quite a clever one with only one statement
	// comprising the whole while loop doing everything we need.
	while( p < &message[0] + MSG_SIZE && (*p++ = getchar()) != '\n');
	
	for (--p; p >= &message[0]; p--) {
		printf("%c", *p);
	}
	printf("\n");
	
	return 0;
}