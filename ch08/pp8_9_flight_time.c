#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool found = false;
	const int departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	const int arrival[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
	int dep_hour, dep_min, arr_hour, arr_min, i, hour, min, total_min;
	
	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hour, &min);
	
	total_min = hour * 60 + min;
	for (i = 0;i < 9;i++) {
		if (total_min < departure[i]) {
			// convert departure time into 12-hour format
			dep_hour = (departure[i] / 60) % 12;
		 	if ((departure[i] / 60) == 12) dep_hour = 12;
		 	dep_min = departure[i] % 60;
		 	// convert arrival time into 12-hour format
			arr_hour = (arrival[i] / 60) % 12;
			if ((arrival[i] / 60) == 12) arr_hour = 12;
			arr_min = arrival[i] % 60;
			printf("Closest departure time is %d:%.2d ",  dep_hour, dep_min);
			if (total_min < 720 ) printf("%c%c, ", 'A', 'M');
			else printf("%c%c, ", 'P', 'M');
			printf("arriving at %d:%.2d ", arr_hour, arr_min);
			if (total_min < 720 ) printf("%c%c, ", 'A', 'M');
			else printf("%c%c.\n", 'P', 'M');
			break;
		}
	}

	return 0;
}
