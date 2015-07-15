#include "stdio.h"

void split_date(int, int, int *, int *);

int main(void)
{
	int day_of_year, year, month, day;

	printf("Enter day of year and year: ");
	scanf("%d %d", &day_of_year, &year);

	split_date(day_of_year, year, &month, &day);

	printf("Date: %.2d/%.2d/%.2d", day, month, year);

	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, sum = 0;

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		days_in_month[1] = 29;
	
	for (i = 0; sum < day_of_year; ++i)
		sum += days_in_month[i];

	*month = i;
	*day = day_of_year - (sum - days_in_month[i - 1]);
}

/*****************
 * Stupid ALITER *
 *****************
void split_date(int day_of_year, int year, int *month, int *day);
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) ) {
		if (day_of_year <= 31) {
			*month = 1;
			*day = day_of_year;
		} else if (day_of_year <= 60) {
			*month = 2;
			*day = day_of_year - 31;
		} else if (day_of_year <= 91) {
			*month = 3;
			*day = day_of_year - 60;
		} else if (day_of_year <= 121) {
			*month = 4;
			*day = day_of_year - 91;
		} else if (day_of_year <= 152) {
			*month = 5;
			*day = day_of_year - 121;
		} else if (day_of_year <= 182) {
			*month = 6;
			*day = day_of_year - 152;
		} else if (day_of_year <= 213) {
			*month = 7;
			*day = day_of_year - 182;
		} else if (day_of_year <= 244) {
			*month = 8;
			*day = day_of_year - 213;
		} else if (day_of_year <= 274) {
			*month = 9;
			*day = day_of_year - 244;
		} else if (day_of_year <= 305) {
			*month = 10;
			*day = day_of_year - 274;
		} else if (day_of_year <= 335) {
			*month = 11;
			*day = day_of_year - 305;
		} else if (day_of_year <= 366) {
			*month = 12;
			*day = day_of_year - 335;
		}
	} else {
		if (day_of_year <= 31) {
			*month = 1;
			*day = day_of_year;
		} else if (day_of_year <= 59) {
			*month = 2;
			*day = day_of_year - 31;
		} else if (day_of_year <= 90) {
			*month = 3;
			*day = day_of_year - 59;
		} else if (day_of_year <= 120) {
			*month = 4;
			*day = day_of_year - 90;
		} else if (day_of_year <= 151) {
			*month = 5;
			*day = day_of_year - 120;
		} else if (day_of_year <= 181) {
			*month = 6;
			*day = day_of_year - 151;
		} else if (day_of_year <= 212) {
			*month = 7;
			*day = day_of_year - 181;
		} else if (day_of_year <= 243) {
			*month = 8;
			*day = day_of_year - 212;
		} else if (day_of_year <= 273) {
			*month = 9;
			*day = day_of_year - 243;
		} else if (day_of_year <= 304) {
			*month = 10;
			*day = day_of_year - 273;
		} else if (day_of_year <= 334) {
			*month = 11;
			*day = day_of_year - 304;
		} else if (day_of_year <= 365) {
			*month = 12;
			*day = day_of_year - 334;
		}
	}
}*/
