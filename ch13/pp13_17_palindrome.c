#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MSG_LEN 50

bool is_palindrome(const char* message);
void reverse(char* message);
void tolower_string(char* message);

int main(void)
{
	char msg[MSG_LEN + 1];
	
	printf("Enter a message: ");
	gets(msg);
	
	if (is_palindrome(msg))
		printf("Palindrome\n");
	else
		printf("Not a Palindrome\n");
	
	return 0;
}

// The function first extracts just the alphabets. It then stores it
// into two strings s and t, reverses t and then compares it to s.
// If they are equal it means we have a palindrome in our midst ;)
bool is_palindrome(const char *message)
{
	char s[MSG_LEN + 1], t[MSG_LEN + 1];
	const char *p = message;	//	array parameters are const objects so need a const pointer
								//	Do note that const is for the object being pointed and not
								//	for p itself. We are changing p but not the object its
								//	pointing to.
	int i = 0;
	
	while (*p) {
		if (isalpha((int) *p))
			if (*p != ' ')
				s[i++] = tolower((int) *p);
		p++;
	}
	strcpy(t, s);
	reverse(t);
	if (strcmp(s,t) == 0)
		return true;
	else
		return false;
	return false;
}

// This one is from the previous question. A good example of reusing
// code. It reverses the string t for us.
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

void tolower_string(char *message)
{
	while (*message) {
		*message = tolower((int) *message);
		*message++;
	}
}