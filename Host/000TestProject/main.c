/*
 * main.c
 *
 *  Created on: Jan 3, 2024
 *      Author: mahen
 */
#include <stdio.h>

int main(void){

	unsigned char data = (unsigned char)(0x87 + 0xFF00);

	float result = (float) 80/3;

	printf("data = %u result = %f\n",data,result);

	return 0;
}

