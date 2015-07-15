#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, min, dep_time, dep_hour, dep_min, arr_time, arr_hour, arr_min, total_min;

	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hour, &min);

	total_min = hour * 60 + min;
	if (total_min < 480) {
		dep_time = 480;
		arr_time = 616;
	} else if (total_min < 583) {
		dep_time = 583;
		arr_time = 712;
	} else if (total_min < 679) {
 		dep_time = 679;
 		arr_time = 811;
 	} else if (total_min < 767) {
 		dep_time = 767;
 		arr_time = 900;
 	} else if (total_min < 840) {
 		dep_time = 840;
 		arr_time = 968;
 	} else if (total_min < 945) {
 		dep_time = 945;
 		arr_time = 1075;
 	} else if (total_min < 1140) {
 		dep_time = 1140;
 		arr_time = 1280;
 	} else {
 		dep_time = 1305;
 		arr_time = 1438;
 	}

 	dep_hour = (dep_time / 60) % 12; arr_hour = (arr_time / 60) % 12;
 	if ((dep_time / 60) == 12) dep_hour = 12; if ((arr_time / 60) == 12) arr_hour = 12;
 	dep_min = dep_time % 60; arr_min = arr_time % 60;

 	printf("Closest departure time is %d:%.2d %s, ", dep_hour, dep_min, (dep_time >= 720 ? "p.m." : "a.m."));
 	printf("arriving at %d:%.2d %s\n", arr_hour, arr_min, (arr_time >= 720 ? "p.m." : "a.m."));

	return 0;
}