/*
 * example.c
 *
 *  Created on: Jan 25, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

int main()
{
	uint8_t data[10] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	printf("2nd data item before = %X\n",*(data+1));
	*(data+1) = 0x9;
	printf("2nd data item before = %X\n",*(data+1));

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









