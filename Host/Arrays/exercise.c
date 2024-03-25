/*
 * exercise.c
 *
 *  Created on: Jan 25, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

void swap(uint32_t* a1,uint32_t len1,uint32_t* a2,uint32_t len2);

void display(uint32_t* a,uint32_t len);

int main()
{
	uint32_t len1,len2;
	printf("Array swapping program\n");

	printf("Enter no of elements of Array-1 and Array-2 : ");
	scanf(("%d %d"),&len1,&len2);

	if((len1 <= 0) || (len2 <= 0)){
		printf("Array cannot be -ve or zero! Exiting..\n");
		Wait_for_input();
		return 0;
	}

	uint32_t a1[len1],a2[len2];

	for (int i = 0; i < len1; i++){
		printf("Enter %d element of Array-1 : ",i);
		scanf("%d",&a1[i]);
	}
	printf("\n");
	for (int i = 0; i < len2; i++){
		printf("Enter %d element of Array-2 : ",i);
		scanf("%d",&a2[i]);
	}


	printf("\n\nContents of arrays before Swapping\n");

	display(a1,len1);
	printf("\n");
	display(a2,len2);

	printf("\n\nContents of arrays after Swapping\n");

	swap(a1,len1,a2,len2);

	display(a1,len1);
	printf("\n");
	display(a2,len2);


	Wait_for_input();
	return 0;
}

void display(uint32_t* pa,uint32_t len)
{
	for (int i = 0; i < len; i++){
		printf("%4d\t",pa[i]);
	}
}

void swap(uint32_t* a1,uint32_t len1,uint32_t* a2,uint32_t len2)
{
	uint32_t len = len1 < len2 ? len1 : len2;

	for (int i = 0; i < len; i++){
			uint32_t temp = a1[i];
			a1[i] = a2[i];
			a2[i] = temp;
	}

}

void Wait_for_input (void)
{
	printf("\n\nPress Enter key to exit\n");
	while (getchar() != '\n')
	{

	};
	getchar();
}


