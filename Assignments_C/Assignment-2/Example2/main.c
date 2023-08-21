/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: Mohamed Shalaby
 */


#include<stdio.h>
void main()
{
	char x;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&x);

	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
		printf("%c is a vowel",x);
	}
	else
		printf("%c is a constant",x);

}
