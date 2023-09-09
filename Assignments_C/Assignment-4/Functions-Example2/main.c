/*
 * main.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Mohamed Shalaby
 */

#include <stdio.h>
int factorial(int x)
{
	if(x!=1)
	{
		return x*factorial(x-1);
	}

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
