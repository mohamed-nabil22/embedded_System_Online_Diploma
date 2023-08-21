/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: Mohamed Shalaby
 */
/*########################################################################

EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################
########################################################################

EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/
#include <stdio.h>
void swap_with_temp();
void swap_without_temp();

void main()
{
	int x = 8;
	int y = 3;
	swap_with_temp(&x,&y);
	printf("x = %d , y = %d\n",x,y);
	swap_without_temp(&x,&y);
	printf("x = %d , y = %d",x,y);
}
void swap_with_temp(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void swap_without_temp(int *x,int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
