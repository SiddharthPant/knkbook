#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int hours, minutes;
	char ch;

	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c", &hours, &minutes, &ch);
	
	if (hours < 1 || hours > 12) return 0;
	if (toupper(ch) == 'P' && hours != 12)
		hours += 12;
	else if (toupper(ch) == 'A' && hours == 12)
		hours = 0;
	
	printf("Equivalent 24-hour time: %d:%.2d\n", hours, minutes);

	return 0;
}
