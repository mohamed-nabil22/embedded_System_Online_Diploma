/*
 * main.c
 *
 *  Created on: Aug 28, 2023
 *      Author: Mohamed Shalaby
 */
//Find transpose of a matrix
#include<stdio.h>
void main()
{
	int x,y;
	int matrix[10][10];
	printf("Enter Rows and Columns Of Matrix:\n");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdout);
	scanf("%d",&y);

	printf("Enter Elements Of Matrix:\n");
	for(int i=0; i < x;i++)
		for(int j = 0 ; j < y;j++)
		{
			printf("Enter elements a%d%d:",i+1,j+1);
			fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	printf("Entered Matrix:\n");
	for(int i=0; i < x;i++)
	{
		for(int j = 0 ; j < y;j++)

		{
			printf("%d ",matrix[i][j]);

		}
		printf("\n");
	}
	int matrix2[10][10];
	for(int j = 0; j < x; j++)//x=2,y=3
	{
		for(int i = 0 ; i < y; i++)

		{
			matrix2[i][j]= matrix[j][i];

		}
		printf("\n");
	}

	printf("Transpose Of Matrix:\n");
	for(int i=0; i < y;i++)
	{
		for(int j = 0 ; j < x;j++)

		{
			printf("%d ",matrix2[i][j]);

		}
		printf("\n");
	}



}
