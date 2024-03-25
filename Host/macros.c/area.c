/*
 * area.c
 *
 *  Created on: Jan 27, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

#define PI 3.1415f

#define AREA(r) ((PI) * (r) * (r))

void Wait_for_input (void);

int main()
{
	float area;
	area = AREA(2+1);

	printf("Area = %f\n",area);
	Wait_for_input();
		return 0;
}


void Wait_for_input (void)
{
	printf("\n\nPress Enter key to exit\n");
	while (getchar() != '\n')
	{

	};
	getchar();
}


