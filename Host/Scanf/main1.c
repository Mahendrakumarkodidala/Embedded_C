/*
 * main1.c
 *
 *  Created on: Jan 15, 2024
 *      Author: mahen
 */
#include <stdio.h>

int main()
{
	double n1,n2,n3,avg;

	printf("Enter the 3 numbers : ");
	fflush(stdout);
	scanf("%lf %lf %lf",&n1,&n2,&n3);

	avg = (n1 +n2 +n3)/3;

	printf("Average = %lf",avg);

	while (getchar() != '\n')
	{

	};
	getchar();

	return 0;
}

