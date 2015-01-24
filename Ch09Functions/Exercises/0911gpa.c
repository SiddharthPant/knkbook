/*
 * 0911gpa.c
 *
 *  Created on: 14-Aug-2014
 *      Author: sid
 */

#include <stdio.h>

#define NUM_SUBJECTS 5

float computeGPA(char [], int);

int main(void)
{
	char grades[NUM_SUBJECTS] = "AAABC";
	printf("GPA is %.1f", computeGPA(grades, NUM_SUBJECTS));

	return 0;
}

float computeGPA(char grades[], int n)
{
	int i;
	float gpa, numGrades[NUM_SUBJECTS] = {4.0f, 3.0f, 2.0f, 1.0f, 0.0f};

	for (i = 0; i < n; i++)
		gpa += numGrades[toupper(grades[i]) - 'A'];

	return gpa / (float) 5;
}
