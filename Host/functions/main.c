/*
 * main.c
 *
 *  Created on: Jan 7, 2024
 *      Author: mahen
 */
#include <stdio.h>

int fun_add(int a, int b, int c);

int main()
{
	//int v1 = 30, v2 = 85, v3 =95;
	int Tsum;

	Tsum=fun_add(20,32,65);


	printf("The sum = %d\n",Tsum);
	/*fun_add(-20,-22,65);
	fun_add(v1,v2,v3);*/

	return 0;
}

int fun_add(int a, int b, int c)
{
	int sum;
	sum = a+b+c;
	return sum;
}
