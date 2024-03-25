/*
 * main.c
 *
 *  Created on: Jan 15, 2024
 *      Author: mahen
 */
#include <stdio.h>

int main()
{
	float n1,n2,n3,avg;

	printf("Enter the first number : ");
	fflush(stdout);
	scanf("%f",&n1);
	printf("Enter the second number : ");
	fflush(stdout);
	scanf("%f",&n2);
	printf("Enter the third number : ");
	fflush(stdout);
	scanf("%f",&n3);

	avg = (n1 +n2 +n3)/3;

	printf("Average = %f",avg);

	while (getchar() != '\n')
	{

	};
	getchar();

	return 0;
}
