/*
 * OddEven.c
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

	int32_t n1,n2;
	n1 = num1;
	n2 = num2;

	if((n1 != num1)||(n2 != num2)){
		printf("Comparing only integer part\n");
	}

	if(n1 & 1){
		printf("%d is a ODD Number\n",n1);
	}else{
		printf("%d is a Even Number\n",n1);
	}

	if(n2 & 1){
		printf("%d is a ODD Number\n",n2);
	}else{
		printf("%d is a Even Number\n",n2);
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

