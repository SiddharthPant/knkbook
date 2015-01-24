#include <stdio.h>

int main(int argc, char const *argv[])
{
	int grade, d1;
	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (0 <= grade && grade < 100) {
		d1 = grade / 10;
		printf("Letter grade: ");
		switch(d1) {
			case 9: printf("A\n"); break;
			case 8: printf("B\n"); break;
			case 7: printf("C\n"); break;
			case 6: printf("D\n"); break;
			case 5: case 4: case 3: case 2: case 1: case 0: 
					printf("F\n"); break;
			default: printf("Invalid grade.\n");
		}
	} else if (grade == 100) printf("Letter grade: A\n");
	else printf ("Invalid grade\n");
	return 0;
}		