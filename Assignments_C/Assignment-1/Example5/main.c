/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: Mohamed Shalaby
 */

/*Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
*/
#include <stdio.h>
void main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	/*what if i make it scanf("%d,&x") enter a character,
	 * the scanf function is attempting to read an integer value,
	 * but it can't properly convert the character to an integer,
	 *  so it returns 0, which is why you're seeing 0 in the output.*/
	printf("ASCII value of G = %d",x);
}
