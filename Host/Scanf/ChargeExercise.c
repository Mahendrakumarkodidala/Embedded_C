/*
 * ChargeExercise.c
 *
 *  Created on: Jan 15, 2024
 *      Author: mahen
 */
#include <stdio.h>

int main()
{
	double charge,chargeE, electrons;

	printf("Enter the charge : ");
	scanf("%lf",&charge);

	printf("Enter the charge of electron : ");
	scanf("%le",&chargeE);

	electrons = (charge / chargeE) * -1;

	printf("Total number of electrons = %lf\n",electrons);
	printf("Total number of electrons = %le\n",electrons);

	printf("Press Enter key to exit\n");
	while (getchar() != '\n')
		{

		};
		getchar();



	return 0;
}


