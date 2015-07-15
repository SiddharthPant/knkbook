#include <stdio.h>
#include <string.h>

#define MSG_SIZE 50

void reverse(char* message);

int main(void)
{
	char message[MSG_SIZE + 1];
	int i = 0;
	
	printf("Enter a message: ");
	// store message one character at a time till the array is full or till a
	// newline character. Its quite a clever one with only one statement
	// comprising the whole while loop doing everything we need.
	while( i < MSG_SIZE && (message[i++] = getchar()) != '\n');
	message[--i] = '\0';
	
	reverse(message);
	
	printf("Reversal is: %s\n", message);
	
	return 0;
}

void reverse(char *message)
{
	char temp;
	char *p = message, *q = p + (strlen(p) - 1);
	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
}