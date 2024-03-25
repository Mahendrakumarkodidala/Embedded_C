#include <stdio.h>

void add(int a, int b, int c)
{
	int sum;
	sum = a+b+c;
	printf("The Sum of %d, %d, %d = %d\n",a,b,c,sum);
}

void sub(int a, int b, int c)
{
	int diff;
	diff= a-b-c;
	printf("The Difference of %d, %d, %d = %d\n",a,b,c,diff);
}

void mul(int a, int b, int c)
{
	long int product;
	product= a*b*c;
	printf("The product of %d, %d, %d = %ld\n",a,b,c,product);
}

void div(int a, int b, int c)
{
	float div;
	div= a/b/c;
	printf("The division of %d, %d, %d = %f\n",a,b,c,div);
}
