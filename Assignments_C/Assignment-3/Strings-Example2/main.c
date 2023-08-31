/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: Mohamed Shalaby
 */

#include<stdio.h>
void main()
{
	char string[100];
	printf("Enter a string:");
	int count = 0;
	fflush(stdout);
	scanf("%s",string);
	for(int i = 0 ; string[i] != 0 ; i++)
	{
		count++;
	}
	printf("Length of string: %d",count);
}
