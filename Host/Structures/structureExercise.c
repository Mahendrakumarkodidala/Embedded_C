/*
 * structureExercise.c
 *
 *  Created on: Jan 23, 2024
 *      Author: mahen
 */
#include <stdio.h>
#include <stdint.h>

void Wait_for_input (void);

struct Packet
{
	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t longAddr	:8;
	uint32_t shortAddr	:2;
	uint32_t addrMode	:1;

};

int main(void)
{
	uint32_t data;
	printf("Enter 32bit packet information : ");
	scanf("%X",&data);

	struct Packet p1;

	p1.crc 		= (uint8_t)( data & 0x3);
	p1.status 	= (uint8_t)((data >> 2)& 0x1);
	p1.payload 	= (uint16_t)((data >> 3) & 0xFFF);
	p1.bat 		= (uint8_t)((data >> 15) & 0x7);
	p1.sensor	= (uint8_t)((data >> 18) & 0x7);
	p1.longAddr = (uint8_t)((data >> 21) & 0xFF);
	p1.shortAddr= (uint8_t)((data >> 29) & 0x3);
	p1.addrMode = (uint8_t)((data >> 31) & 0x1);

	printf("crc 		= %#x\n",p1.crc);
	printf("status 		= %#x\n",p1.status);
	printf("payload 	= %#x\n",p1.payload);
	printf("bat 		= %#x\n",p1.bat);
	printf("sensor 		= %#x\n",p1.sensor);
	printf("longAddr 	= %#x\n",p1.longAddr);
	printf("shortAddr 	= %#x\n",p1.shortAddr);
	printf("addrMode 	= %#x\n",p1.addrMode);

	printf("Size of Packet = %d\n",sizeof(p1));

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
