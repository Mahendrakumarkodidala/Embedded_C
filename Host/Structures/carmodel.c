/*
 * carmodel.c
 *
 *  Created on: Jan 22, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

struct CarModel
{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

void Wait_for_input (void);

int main()
{

	struct CarModel ford = {2021,15000,220,1330};

	struct CarModel ferrari = {4031,35000,160,1900.96};

	printf("\nFord Car Details\n");
	printf("carNumber = %d\ncarPrice = %d\ncarMaxSpeed = %d\ncarWeight = %f\n",ford.carNumber,ford.carPrice,ford.carMaxSpeed,ford.carWeight);

	printf("\nFerrari Car Details\n");
	printf("carNumber = %d\ncarPrice = %d\ncarMaxSpeed = %d\ncarWeight = %f\n",ferrari.carNumber,ferrari.carPrice,ferrari.carMaxSpeed,ferrari.carWeight);

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

