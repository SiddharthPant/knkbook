#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define N 40

void encrypt(char* message, int shift);

int main(void)
{
	char message[N + 1];
	int shift;
	
	printf("Enter message to be encrypted: ");
	gets(message);
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);
	
	encrypt(message, shift);
	printf("Encrypted message: %s\n", message);
	
	
	return 0;
}

void encrypt(char *message, int shift)
{
	for (char *p = message; p < message + strlen(message); p++) {
		if (isalpha(*p)) {
			*p = ((*p - 'A') + shift) % 26 + 'A';
		} else if (*p >= 'a' && *p <= 'z') {
			*p = ((*p - 'a') + shift) % 26 + 'a';
		}
	}
}