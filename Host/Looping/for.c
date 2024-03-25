/*
 * for.c
 *
 *  Created on: Jan 20, 2024
 *      Author: mahen
 */

#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

int main()
{
	int32_t ub,lb;
	uint32_t count=0;

	printf("Enter start and end numbers (Space b/w 2 numbers) : ");
	if(scanf("%d %d",&lb,&ub) == 0){
		printf("Invalid Input. Exiting...");
		Wait_for_input();
		return 0;
	}

	if(ub<=lb){
		printf("Ending num should be greater than starting num\n");
		Wait_for_input();
		return 0;
	}


	printf("%d	%d\n",lb,ub);
	printf("Even Numbers are\n");

	for (; lb <= ub; lb++){
		if(lb % 2 == 0){
			printf("%4d\t",lb);
			count++;
		}
	}

	printf("\nTotal number of even numbers = %d\n",count);

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




