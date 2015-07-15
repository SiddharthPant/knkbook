#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n, d;

	printf("Enter number of days in a month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &d);

	for (i = 1; i < d; ++i) { // Prints the initial spaces
		if (d != 1) {
			printf("   ");
		}
	}
	for (i = 1; i <= n; i++) { // Prints the calendar
		printf("%2d ", i);
		if (((i + d - 1) % 7) == 0) { // i + d will be a multiple of 7 (no. of days in a week)
			printf("\n"); // i + d - 1 so as to give a newline after 7 days.
		}
	}

	return 0;
}