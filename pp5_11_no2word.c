#include <stdio.h>

int main(int argc, char const *argv[])
{
	int d1, d2;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &d1, &d2);

	printf("You entered the number ");
	if (d1 != 1) {
		switch (d1) {
			case 2: printf("twenty-"); break;
			case 3:printf("thirty-"); break;
			case 4:printf("forty-"); break;
			case 5:printf("fifty-"); break;
			case 6:printf("sixty-"); break;
			case 7:printf("seventy-"); break;
			case 8:printf("eighty-"); break;
			case 9:printf("ninety-"); break;
		}
		switch (d2) {
			case 0: printf("zero\n"); break;
			case 1: printf("one\n"); break;
			case 2: printf("two\n"); break;
			case 3: printf("three\n"); break;
			case 4: printf("four\n"); break;
			case 5: printf("five\n"); break;
			case 6: printf("six\n"); break;
			case 7: printf("seven\n"); break;
			case 8: printf("eight\n"); break;
			case 9: printf("nine\n"); break;
		}
	} else {
		switch (d2) {
			case 0: printf("ten"); break;
			case 1: printf("eleven"); break;
			case 2: printf("twelve"); break;
			case 3: printf("thirteen"); break;
			case 4: printf("fourteen"); break;
			case 5: printf("fifteen"); break;
			case 6: printf("sixteen"); break;
			case 7: printf("seventeen"); break;
			case 8: printf("eighteen"); break;
			case 9: printf("nineteen"); break;
		}
	}
	return 0;
}
