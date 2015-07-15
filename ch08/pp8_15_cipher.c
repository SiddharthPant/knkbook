#include <stdio.h>

#define N 40

int main(void)
{
	char ch, message[N];
	int i = 0, shift, j;
	
	printf("Enter message to be encrypted: ");
	while ((ch = getchar()) != '\n') {
		message[i++] = ch; 
	}
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);
	
	printf("Encrypted message: ");
	for (j = 0; j < i; j++) {
		if (message[j] >= 'A' && message[j] <= 'Z') {
			message[j] = ((message[j] - 'A') + shift) % 26 + 'A';
		} else if (message[j] >= 'a' && message[j] <= 'z') {
			message[j] = ((message[j] - 'a') + shift) % 26 + 'a';
		}
		printf("%c", message[j]);
	}
	printf("\n");
	
	return 0;
}
