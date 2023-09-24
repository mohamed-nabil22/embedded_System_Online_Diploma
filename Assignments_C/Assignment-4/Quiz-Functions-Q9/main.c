/*
 * main.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Mohamed Shalaby
 */
#include<stdio.h>
void binary(int x)
{
	int k;
	for(int i = 31; i >= 0 ; i--)
	{
		k = x >> i;
		if(k & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n4th least significant bit is : ");
	k = x >> 3;
	if(k & 1)
		printf("1");
	else
		printf("0");
}

int main()
{
	int num;
	int x;
	printf("Please enter the integer number:");
	fflush(stdout);
	scanf("%d",&x);
	printf("The number in binary representation is : \n");
	binary(x);


	return 0;
}
