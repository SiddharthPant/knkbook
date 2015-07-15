#include "stdio.h"

void split_time(long, int *, int *, int *);

int main(void)
{
	long total_sec = 1;
	int hr, min, sec;

	while(total_sec != 0) {
		printf("Enter number of seconds since midnight(0 to exit): ");
		scanf("%ld", &total_sec);
	
		split_time(total_sec, &hr, &min, &sec);
	
		//printf("Wait a sec....\n");
		//printf("Woops no answer!\n");
		printf("Time: %.2d:%.2d:%.2d\n", hr, min, sec);
	}

	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	int total_min;
	*sec = total_sec % 60;
	total_min = total_sec / 60;
	*min = total_min % 60;
	*hr = total_min / 60;
}
