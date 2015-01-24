#include <stdio.h>

int main(void)
{
	char ch, phone_no[15];
	int i = 0;

	printf("Enter phone number: ");
	while ((ch = getchar()) != '\n') {
		phone_no[i] = ch;
		++i;
	}
	for (i = 0; i < 15; i++) {
		switch (phone_no[i]) {
			case 'A': case 'B':	case 'C': phone_no[i] = '2';
								    break;	
			case 'D':	case 'E':	case 'F': phone_no[i] = '3';
								    break;
			case 'G':	case 'H':	case 'I': phone_no[i] = '4';
								    break; 
			case 'J':	case 'K':	case 'L': phone_no[i] = '5';
								    break;
			case 'M':	case 'N':	case 'O': phone_no[i] = '6';
								    break;
			case 'P':	case 'R':	case 'S': phone_no[i] = '7';
								    break;
			case 'T':	case 'U':	case 'V': phone_no[i] = '8';
								    break;
			case 'W':	case 'X':	case 'Y': phone_no[i] = '9';
								    break;
			default: break;
		}
	}
	printf("In numeric form: ");
	for (i = 0; i < 15; i++) {
		printf("%c", phone_no[i]);
	}

	return 0;
}
