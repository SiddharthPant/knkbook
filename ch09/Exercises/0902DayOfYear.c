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
	int month, date, year;
	printf("Enter a date(mm/dd/yy): \n");
	fflush(stdout);
	scanf("%d / %d / %d", &month, &date, &year);

	printf("Day of the year = %d", dayOfYear(month, date, year));

	return 0;
}

int dayOfYear(int month, int date, int year)
{
	int i;
	int day = 0, daysPerMonth;
	for (i = 1; i <= month; i++) {
		// The switch case selects the correct count of days in a month
		switch (i) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			daysPerMonth = 31;
			break;
		case 4: case 6: case 9: case 11:
			daysPerMonth = 30;
			break;
		case 2:
			// If divisible by 4 i.e. leap year than feb has 29
			// otherwise 28 days
			if (!(year % 4))
				daysPerMonth = 29;
			else if (month == 2 && day > 28) {
				printf("Invalid day.\nFebruary has only 28 days in a non leap year.\n");
				return -1;
			} else
				daysPerMonth = 28;
			break;
		default:
			printf("Month is invalid\n");
			fflush(stdout);
			return -1;
		}
		day += daysPerMonth;
	}
	day += date;

	return day;
}
