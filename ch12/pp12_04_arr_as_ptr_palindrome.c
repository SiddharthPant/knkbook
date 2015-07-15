#include <ctype.h>
#include <stdio.h>

#define MSG_LEN 50

int main(void)
{
	char ch, msg[MSG_LEN], *p, *q;
	
	printf("Enter a message: ");
	for (p = msg; p < msg + MSG_LEN;) {
		ch = getchar();
		if (ch == '\n')
			break;
		if ( isalpha(ch))
			*p++ = toupper(ch);
	}
	
	for (q = msg, --p; p >= msg && q < msg + MSG_LEN; q++, p--) {
		if (*q != *p)
			break;
	}
	
	if (++p == msg)
		printf("Palindrome\n");
	else
		printf("Not a Palindrome\n");
	
	return 0;
}