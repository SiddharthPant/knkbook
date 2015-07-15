#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int hour, minutes, total_min;
	char ch;

	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c", &hour, &minutes, &ch);
	
	if (toupper(ch) == 'A' || hour == 12)
		total_min = hour * 60 + minutes;
	else
		total_min = hour * 60 + minutes + 720;
	if (total_min < 480) {
		printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n");
	} else if (total_min < 583) {
		printf("Closest departure time is 9:43 AM, arriving at 11:52 AM\n");
	} else if (total_min < 679) {
		printf("Closest departure time is 11:19 AM, arriving at 1:31 PM\n");
 	} else if (total_min < 767) {
		printf("Closest departure time is 12:47 PM, arriving at 3:00 PM\n");	
 	} else if (total_min < 840) {
		printf("Closest departure time is 2:00 PM, arriving at 4:08 PM\n");
 	} else if (total_min < 945) {
		printf("Closest departure time is 3:45 PM, arriving at 5:55 PM\n");	
 	} else if (total_min < 1140) {
		printf("Closest departure time is 7:00 PM, arriving at 9:20 AM\n");
 	} else {
		printf("Closest departure time is 9:45 PM, arriving at 11:58 PM\n");
 	}

	return 0;
}
