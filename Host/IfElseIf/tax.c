/*
 * tax.c
 *
 *  Created on: Jan 17, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

int main()
{
	uint64_t income,tax = 0;
	double tem_income;

	printf("Enter your total income : ");
	if(scanf("%lf",&tem_income)==0){
		printf("Invalid Input. Exiting..");
		Wait_for_input();
		return 0;
	}

	if(tem_income < 0){
		printf("Income cannot be negative\n");
		Wait_for_input();
		return 0;
	}

	income = (uint64_t) tem_income;

	if(income <= 9525){
		tax =0;
	}
	else if ((income > 9525) && (income <= 38700 )){
		tax = income * 0.12;
	}
	else if ((income > 38700) && (income <= 82500 )){
		tax = income * 0.22;
	}
	else if (income > 82500){
		tax = income * 0.32;
		tax = tax+1000;
	}


	printf("Tax payable : $%I64u\n",tax);

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


