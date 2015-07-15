#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, min, h;

	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hour, &min);

	h = hour;
	if (hour != 12) hour = hour % 12;

	printf("Equivalent 12-hour time: %d:%.2d %s", hour, min, (h > 11 ? "PM" : "AM"))
	return 0;
}