/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Mohamed Shalaby
 */
//c program to insert an element of an array

#include<stdio.h>
void main()
{
	//1 2 3 4 5
	int number,element,location;
	int array[10];
	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d",&number);
	for(int i = 0 ; i < number ; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the element to be inserted:");
	fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location:");
	fflush(stdout);
	scanf("%d",&location);

	for(int i = number ; i >= location ; i--)
	{
		array[i]=array[i-1];
	}
	array[location-1]=element;
	for(int i = 0; i <= number ; i++)
		printf("%d ",array[i]);

}
