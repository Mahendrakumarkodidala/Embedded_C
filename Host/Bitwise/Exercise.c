/*
 * Exercise.c
 *
 *  Created on: Jan 17, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

int main()
{
	float num1,num2;

	printf("Enter the First integer : ");
	if(scanf("%f",&num1) == 0){
		printf("Invalid Input. Exiting\n");
		Wait_for_input();
		return 0;
	}

	printf("Enter the Second integer : ");
	if(scanf("%f",&num2) == 0){
		printf("Invalid Input. Exiting\n");
		Wait_for_input();
		return 0;
	}

	uint32_t n1,n2;
	n1 = num1;
	n2 = num2;

	if((n1 != num1)||(n2 != num2)){
		printf("Comparing only integer part\n");
	}

	printf("Bitwise AND of %d and %d = %d\n",n1,n2,(n1 & n2));
	printf("Bitwise OR of %d and %d = %d\n",n1,n2,(n1 | n2));
	printf("Bitwise XOR of %d and %d = %d\n",n1,n2,(n1 ^ n2));
	printf("Bitwise Negation of %d = %d\n",n1,~n1);
	printf("Bitwise Negation of %d = %d\n",n2,~n2);

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
