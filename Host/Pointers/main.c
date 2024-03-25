/*
 * main.c
 *
 *  Created on: Jan 15, 2024
 *      Author: mahen
 */
#include <stdio.h>

int main()
{
	char v1 = 100;
	printf("Value of variable = %d\n",v1);
	printf("Address of variable = %p\n",&v1);

	char* pAddress = &v1;

	char data = *pAddress;
	printf("Read Data of variable = %d\n",data);

	*pAddress = 65;
	printf("data of initial variable = %d\n",v1);

	return 0;
}

