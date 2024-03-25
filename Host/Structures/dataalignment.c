/*
 * dataalignment.c
 *
 *  Created on: Jan 22, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

struct dataset
{
	char data1;
	int data2;
	char data3;
	short data4;
};

void displaymembers (struct dataset *ptr);

int main(void)
{
	struct dataset data;
	data.data1 = 0X11;
	data.data2 = 0XFFFFEEEE;
	data.data3 = 0X55;
	data.data4 = 0XA5A5;



	displaymembers (&data);

	Wait_for_input();
	return 0;
}

void displaymembers (struct dataset *ptr)
{
	printf("Before : data.data1 = %X\n",ptr->data1);
}

void Wait_for_input (void)
{
	printf("\n\nPress Enter key to exit\n");
	while (getchar() != '\n')
	{

	};
	getchar();
}


