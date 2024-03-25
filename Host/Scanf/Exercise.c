/*
 * Exercise.c
 *
 *  Created on: Jan 15, 2024
 *      Author: mahen
 */
#include <stdio.h>

int main()
{
	char c1,c2,c3,c4,c5,c6;

	printf("Enter 6 characters : ");
	fflush(stdout);
	scanf("%c %c %c %c %c %c",&c1,&c2,&c3,&c4,&c5,&c6);

	printf("\nASCII Codes : %d %d %d %d %d %d\n",c1,c2,c3,c4,c5,c6);

	printf("Press Enter key to exit\n");
	while (getchar() != '\n')
		{

		};
		getchar();



	return 0;
}

