#include <stdio.h>

int main(int argc, char const *argv[])
{
	int dd1, mm1, yy1, dd2, mm2, yy2, min_mm, min_dd, min_yy, max_mm, max_dd, max_yy;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d /%d /%d", &mm1, &dd1, &yy1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d /%d /%d", &mm2, &dd2, &yy2);

	if (yy1 < yy2) {
		min_yy = yy1; max_yy = yy2;
		min_mm = mm1; max_mm = mm2;
		min_dd = dd1; max_dd = dd2;
	} else if (yy2 < yy1) {
		min_yy = yy2; max_yy = yy1;
		min_mm = mm2; max_mm = mm1;
		min_dd = dd2; max_dd = dd1;
	} else if (mm1 < mm2) { // Years are equal so we compare months
		min_yy = yy1; max_yy = yy2;
		min_mm = mm1; max_mm = mm2;
		min_dd = dd1; max_dd = dd2;
	} else if (mm2 < mm1) {
		min_yy = yy2; max_yy = yy1;
		min_mm = mm2; max_mm = mm1;
		min_dd = dd2; max_dd = dd1;
	} else if (dd1 <= dd2) { // months are equal so we compare days
		min_yy = yy1; max_yy = yy2;
		min_mm = mm1; max_mm = mm2;
		min_dd = dd1; max_dd = dd2;
	} else {
		min_yy = yy2; max_yy = yy1;
		min_mm = mm2; max_mm = mm1;
		min_dd = dd2; max_dd = dd1;
	}

	printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", min_mm, min_dd, min_yy, max_mm, max_dd, max_yy );

	return 0;
}