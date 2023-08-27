/*
 * main.c
 *
 *  Created on: Aug 27, 2023
 *      Author: Mohamed Shalaby
 */
//Sum of two dimenstional arrays

#include<stdio.h>
void main()
{
	float a[2][2];
	float b[2][2];
	float sum[2][2]= {{0,0},{0,0}};
	printf("Enter the elements of first matrix:\n");
	fflush(stdout);
	for(int i = 0 ; i < 2 ; i++)
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("enter a%d%d:",i+1,j+1);//i+1 not the same as i++ it doesnt increment i in the next
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}

	printf("Enter the elements of second matrix:\n");
	fflush(stdout);
	for(int i = 0 ; i < 2 ; i++)
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("enter b%d%d:",i+1,j+1);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}

	for(int i = 0 ; i < 2 ; i++)
		for(int j = 0 ; j < 2 ; j++)
			sum[i][j]+=a[i][j]+b[i][j];

	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)

			printf("%f	",sum[i][j]);
		printf("\n");}

}
