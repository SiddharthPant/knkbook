#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i1, i2, i3, i4, max, min;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	if (i1 > i2 && i1 > i3 && i1 > i4) {
		max = i1;
	} else if (i2 > i1 && i2 > i3 && i2 > i4) {
		max = i2;
	} else if (i3 > i1 && i3 > i2 && i3 > i4) {
		max = i3;
	} else {
		max = i4;
	}
	if (i1 < i2 && i1 < i3 && i1 < i4) {
		min = i1;
	} else if (i2 < i1 && i2 < i3 && i2 < i4) {
		min = i2;
	} else if (i3 < i1 && i3 < i2 && i3 < i4) {
		min = i3;
	} else {
		min = i4;
	}

	printf("Largest: %d\nSmallest: %d\n", max, min);
	return 0;
}