/*
 * area.c
 *
 *  Created on: Jan 17, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

int main()
{
	double area, base1, base2, height, radius, side, width, length;
	int8_t code;

	printf("Area Calculation Program\nCircle  ->  c\nTriangle  ->  t\nRectangle  ->  r\nSquare  -> s\nTrapezoid  ->  z\n");

	printf("Enter the code here : ");
	scanf("%c",&code);

	switch (code)
	{
	case('c'):
			printf("Circle Area Calculation\n");
			printf("Enter the radius : ");
			scanf("%lf",&radius);

			if(radius <= 0){
				printf("Radius cannot be 0 or -ve\n");
			}

			area = (22/7)*radius*radius;
			break;


	case('z'):
			printf("Trapezoid Area Calculation\n");
			printf("Enter the base 1 : ");
			scanf("%lf",&base1);
			printf("Enter the base 2 : ");
			scanf("%lf",&base2);
			printf("Enter the height : ");
			scanf("%lf",&height);

			if((base1 <= 0)||(base2 <=0)){
				printf("Base cannot be 0 or -ve\n");
			}
			if(height <= 0){
				printf("Height cannot be 0 or -ve\n");
			}

			area = ((base1+base2)/2)*height;
			break;


	case('t'):
			printf("Triangle Area Calculation\n");
			printf("Enter the base : ");
			scanf("%lf",&base1);
			printf("Enter the height : ");
			scanf("%lf",&height);

			if(height <= 0){
				printf("Height cannot be 0 or -ve\n");
			}
			if(base1 <= 0){
				printf("Base cannot be 0 or -ve\n");
			}

			area = (height*base1)/2;
			break;


	case('s'):
			printf("Square Area Calculation\n");
			printf("Enter the side : ");
			scanf("%lf",&side);

			if(side <= 0){
				printf("Side cannot be 0 or -ve\n");
			}

			area = side*side;
			break;


	case('r'):
			printf("Recantagle Area Calculation\n");
			printf("Enter the width : ");
			scanf("%lf",&width);
			printf("Enter the length : ");
			scanf("%lf",&length);

			if(length <= 0){
				printf("Length cannot be 0 or -ve\n");
			}
			if(width <= 0){
				printf("width cannot be 0 or -ve\n");
			}

			area = width*length;
			break;

	default:
		printf("Invalid Code\n");
		area = -1;

	}
	if(!(area < 0)){
		printf("Area : %lf\n",area);
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


