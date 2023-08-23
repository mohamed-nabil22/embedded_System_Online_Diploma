/*
 * main.c
 *
 *  Created on: Aug 23, 2023
 *      Author: Mohamed Shalaby
 */


#include<stdio.h>
int main()
{
	int fact;
	int count;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&fact);
	if(fact>0)
	{
		count = fact;
		while(count>1)
		{
			count--;
			fact = fact * count;
		}
		printf("Factorial = %d",fact);
	}
	else if(fact==0)
	{
		fact=1;
		printf("Factorial = %d",fact);
	}
	else
	{
		printf("ERROR!!Factorial of negative number doesn't exist");
		return 0;
	}

}
