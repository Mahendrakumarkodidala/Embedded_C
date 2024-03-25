/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

struct dataset
{
	char data1;
	int data2;
	char data3;
	short data4;
}__attribute__((packed));

int main(void)
{
	struct dataset data;
	data.data1 = 0XAA;
	data.data2 = 0XFFFFEEEE;
	data.data3 = 0X55;
	data.data4 = 0XA5A5;

	printf("data.data1 = %d\n",data.data1);
	printf("data.data2 = %d\n",data.data2);
	printf("data.data3 = %d\n",data.data3);
	printf("data.data4 = %d\n",data.data4);



    /* Loop forever */
	for(;;);
}