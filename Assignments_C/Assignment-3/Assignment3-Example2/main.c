/*
 * main.c
 *
 *  Created on: Aug 27, 2023
 *      Author: Mohamed Shalaby
 */
//c program to calculate average using arrays
#include<stdio.h>

void main()
{
	int number;
	printf("Enter the number of data:");
	fflush(stdout);
	scanf("%d",&number);
	float array[100];
	float sum_of_array=0;
	int count;
	while(number>100||number<=0)
		{
		printf("Error number should be from 1 to 100\n");
		printf("please Enter the Number again:\n");
		fflush(stdout);
		scanf("%d",&number);
		}
	for(int i=0 ; i < number;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&array[i]);
		sum_of_array += array[i];
	}
			printf("Average=%.2f",sum_of_array/number);

}

