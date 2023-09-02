/*
 * main.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Mohamed Shalaby
 */


/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: Mohamed Shalaby
 */

#include<stdio.h>
#include<string.h>
void main()
{
	char string[100];
	char temp;
	printf("Enter the string : ");
	fflush(stdout);
	scanf("%s",string);
	printf("Reverse string is : ");
	//hamasa-->asamah
	for(int i = (strlen(string))-1,j=0;j<=(strlen(string)/2)-1;j++,i--)
	{
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}
	for(int i = 0 ; i < strlen(string) ; i++)
		printf("%c",string[i]);

}
