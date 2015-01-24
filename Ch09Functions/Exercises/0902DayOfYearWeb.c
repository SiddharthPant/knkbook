/*
 * 0902DayOfYear.c
 *
 *  Created on: 08-Aug-2014
 *      Author: sidpa_000
 * Description: Create function that returns day of year
 */

#include <stdio.h>

int dayOfYear(int, int, int);

int main(void)
{
	int month, day, year;
	printf("Enter a date(mm/dd/yy): \n");
	fflush(stdout);
	scanf("%d / %d / %d", &month, &day, &year);

	printf("Day of the year = %d", dayOfYear(month, day, year));

	return 0;
}

int dayOfYear(int month, int day, int year)
{
	int i, dayCount = 0;
	int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (i = 1; i <= month; i++) {
		dayCount += daysPerMonth[i - 1];
	}
	if (!(year % 4) && month > 2)
		dayCount++;

	return dayCount + day;
}
