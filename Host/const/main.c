/*
 * main.c
 *
 *  Created on: Jan 21, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

uint32_t const data = 10;

void Wait_for_input (void);

int main()
{


	printf("value1 = %d\n",data);

	uint32_t *pdata = (uint32_t *)&data;

	*pdata = 50;

	printf("value1 = %d\n",data);

	Wait_for_input();
	return 0;
}

void Wait_for_input (void)
{
	printf("\n\nPress Enter Key to Exit!!\n");
	while(getchar()!='\n'){

	};
	getchar();
}
