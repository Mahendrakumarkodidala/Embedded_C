/*
 * while.c
 *
 *  Created on: Jan 20, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

int main()
{
	uint8_t i=1;

	while(i<=10){
		printf("%d\n",i);
		i++;
	}
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
