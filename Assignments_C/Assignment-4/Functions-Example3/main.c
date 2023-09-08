/*
 * main.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Mohamed Shalaby
 */


#include<stdio.h>
#include<string.h>
void reverse(char arr[])
{
	int temp;
	for(int i = 0 , j = strlen(arr)-1; (i < strlen(arr)/2||j>strlen(arr)/2); i++,j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
void main()
{
	char arr[100];
	printf("Enter a sentence:");
	fflush(stdout);
	gets(arr);
	reverse(arr);
	for(int i = 0; i < strlen(arr);i++)
		printf("%c",arr[i]);
}
