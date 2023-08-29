/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Mohamed Shalaby
 */


#include<stdio.h>
void main()
{
	int x;
	int i;
	int array[10];
	int element;
	int location;
	printf("Enter number of elements:");
	fflush(stdout);
	scanf("%d",&x);
	for( i = 0 ; i < x ; i++)
	{
		scanf("%d",&array[i]);
	}

	printf("Enter the element to be searched:");
	fflush(stdout);
	scanf("%d",&element);

	for( i = 0 ; i < x ; i++)
	{
		if(array[i]==element)
		{
			location=i;
			printf("number found at location = %d",location+1);
			break;
		}

	}
	if(i==x)
	printf("number not found");

}
