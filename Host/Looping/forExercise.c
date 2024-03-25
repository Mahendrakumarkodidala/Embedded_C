/*
 * forExercise.c
 *
 *  Created on: Jan 20, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

int main()
{
	uint32_t height;
	double h1=0;

	printf("Enter height of pyramid : ");
	if(scanf("%lf",&h1) == 0){
		printf("Invalid Input. Exiting...");
		Wait_for_input();
		return 0;
	}
	if(h1<=0){
		printf("Height cannot be negative or zero\n");
		Wait_for_input();
		return 0;
	}

	height = h1;
	if(height != h1){
		printf("Printing for only Integer value\n");
	}

	for(int i=1; i<= height; i++){
		for(int j=i; j>=1; j--){
			printf("%d 	",j);
		}
		printf("\n");
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

