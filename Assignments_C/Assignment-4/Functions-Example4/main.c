/*
 * main.c
 *
 *  Created on: Sep 9, 2023
 *      Author: Mohamed Shalaby
 */


#include<stdio.h>
int pow(int x,int y)
{

	if(y!=0)
	{
		return (x * pow(x,--y));
	}
	else
		return 1;

}
void main()
{
	printf("Enter base number:");
	fflush(stdout);
	int x,y;
	scanf("%d",&x);

	printf("Enter power number(positive integer):");
	fflush(stdout);
	scanf("%d",&y);
	int z= pow(x,y);
	printf("%d^%d=%d",x,y,z);
}
