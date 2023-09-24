/*
 * main.c
 *
 *  Created on: Sep 20, 2023
 *      Author: Mohamed Shalaby
 */
#include <stdio.h>



void main()
{
	 int arr[]={10,20,40,20,30,20};
	 int x;
	 printf("enter your search number:");
	 fflush(stdout);
	 scanf("%d",&x);
	 f(arr,x);
}
void f(int *arr,int x)
{
	int k=-1;
	for(int i = 0 ; i < 6 ; i++)
	{
		if(arr[i]==x)
			k = i;
		else
			continue;
	}
	printf("index = %d", k);
}
