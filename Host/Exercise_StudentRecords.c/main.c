/*
 * main.c
 *
 *  Created on: Jan 26, 2024
 *      Author: mahen
 */
#include <stdio.h>

typedef struct
{
	int rollnumber[10];
	char name[100];
	char branch[50];
	char dob[15];
	int sem;
}STUDENT_INFO_t;

int option(void);

void Wait_for_input (void);

int main()
{
	//STUDENT_INFO_t students[10];

	printf("Student record management program\n");

	//int opt = option();









	return 0;
	Wait_for_input();

}

int option(void)
{
	printf("Display all records 	->1\n");
	printf("Add new record 			->2\n");
	printf("Delete a record 		->3\n");
	printf("Exit application		->4\n");
	int option;
	printf("\nEnter your option here: ");
	scanf("%d",&option);
	return option;
}
void Wait_for_input (void)
{
	printf("\n\nPress Enter key to exit\n");
	while (getchar() != '\n')
	{

	};
	getchar();
}
