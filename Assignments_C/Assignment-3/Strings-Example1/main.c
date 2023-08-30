/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: Mohamed Shalaby
 */

#include<stdio.h>
#include<string.h>
void main()
{
	printf("Enter a string:");
	fflush(stdout);
	char Name[100];
	char x;
	int i=0 ,count=0;
	gets(Name);
	fflush(stdout);
	printf("Enter a character to find a frequency:");
	fflush(stdout);
	scanf("%c",&x);
	while(Name[i]!=0)
	{
		if(Name[i]==x)
		{
			count++;
		}
		i++;
	}
	printf("Frequency of e = %d",count);

}
