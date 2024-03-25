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

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	uint32_t *pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t *pPDModeReg = (uint32_t*)0x40020C00;
	uint32_t *pPDOutputReg = (uint32_t*)0x40020C14;

	//1. Enabling the Clock AHB1ENR - 3rd bit
	*pClkCtrlReg = *pClkCtrlReg | (1 << 3);


	//2. Changing the mode of PD12 pin (25,24 bit to 0,1)
	// a. Clearing the 24th bit and 25th bit
	*pPDModeReg = *pPDModeReg & ~(3 << 24);
	// b. Setting the 24th bit as 1
	*pPDModeReg = *pPDModeReg | (1 << 24);



	//3. Setting the 12th bit of output data register as HIGH
	*pPDOutputReg = *pPDOutputReg | (1 << 12);




    /* Loop forever */
	for(;;);
}
