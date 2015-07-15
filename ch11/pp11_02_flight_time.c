#include <stdio.h>

#define NUM 8

void find_closest_flight(int, int *, int *);
void minutes_to_hour_clock(int, int *, int *, char *);

int main(int argc, char const *argv[])
{
	int hour, min, desired_time;
	int departure_time, dep_hour, dep_min;
	int arrival_time, arr_hour, arr_min;
	char d_meridian, a_meridian;

	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hour, &min);

	desired_time = hour * 60 + min;
	find_closest_flight(desired_time, &departure_time, &arrival_time);
	minutes_to_hour_clock(departure_time, &dep_hour, &dep_min, &d_meridian);
	minutes_to_hour_clock(arrival_time, &arr_hour, &arr_min, &a_meridian);

	printf("Closest departure time is %d:%.2d %cm, ", dep_hour, dep_min, d_meridian);
 	printf("arriving at %d:%.2d %cm\n", arr_hour, arr_min, a_meridian);

}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	int departure_times_array[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	int arrival_times_array[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

	for (int i = 0; i < NUM; ++i) {
		if (departure_times_array[i] > desired_time) {
			*departure_time = departure_times_array[i];
			*arrival_time = arrival_times_array[i];
			break;
		}
	}
}

void minutes_to_hour_clock(int total_time, int *hour, int *min, char *meridian)
{
	*hour = (total_time / 60) % 12;
 	if ((total_time / 60) == 12)
 		*hour = 12;
 	*min = total_time % 60;
 	if (total_time < 720)
 		*meridian = 'a';
 	else
 		*meridian = 'p';
}
