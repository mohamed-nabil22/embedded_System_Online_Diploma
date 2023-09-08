/*
 * main.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Mohamed Shalaby
 */

#include <stdio.h>
int factorial(int x)
{
	int fact = x;
	while(x!=1)
	{
		fact=fact*--x;
	}
	return fact;
}
void main()
{
	int x;
	printf("Enter an positive integer:");
	fflush(stdout);
	scanf("%d",&x);
	int j = factorial(x);
	printf("factorial of %d = %d",x,j);
}
