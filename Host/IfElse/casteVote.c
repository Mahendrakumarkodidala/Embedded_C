/*
 * main.c
 *
 *  Created on: Jan 17, 2024
 *      Author: mahen
 */
#include <stdio.h>


int main()
{
	int age;
	printf("Enter your Age : ");
	fflush(stdout);
	scanf("%d",&age);

	if(age<=0){
		printf("Enter a valid age\n");
	}

	if(age>=18){
		printf("You are eligible to vote\n");
	}
	else{
		printf("You are not eligible to vote\n");
	}

	printf("Press Enter key to exit\n");
	while (getchar() != '\n')
	{

	};
	getchar();


	return 0;
}

