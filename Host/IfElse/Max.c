/*
 * Max.c
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

	printf("Enter first number : ");
	if(scanf("%f",&num1)==0){
		printf("Invalid Input. Exiting..");
		Wait_for_input();
		return 0;
	}
	printf("Enter second number : ");
	if(scanf("%f",&num2)==0){
			printf("Invalid Input. Exiting..");
			Wait_for_input();
			return 0;
		}


	uint32_t n1,n2;
	n1 =num1;
	n2=num2;

	if((n1 != num1)||(n2 != num2)){
		printf("Comparing only the integer part\n");
	}

	if(n1==n2){
			printf("Numbers are equal");
	}
	else {
		if(n1>n2){
			printf("%d is bigger \n",n1);
		}
		else{
			printf("%d is bigger ",n2);
		}
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

