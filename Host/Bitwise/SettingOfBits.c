/*
 * SettingOfBits.c
 *
 *  Created on: Jan 17, 2024
 *      Author: mahen
 */
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
	float num1;

	printf("Enter the integer : ");
	if(scanf("%f",&num1) == 0){
		printf("Invalid Input. Exiting\n");
		Wait_for_input();
		return 0;
	}


	int32_t n1,out;
	n1 = num1;

	if(n1 != num1){
		printf("Comparing only integer part\n");
	}
	out = n1 | 0x90;

	printf("Input : Output = 0x%x : 0x%x\n",n1,out);



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



