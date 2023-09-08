/*
 * main.c
 *
 *  Created on: Sep 8, 2023
 *      Author: Mohamed Shalaby
 */


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
void primeNumbers(int x,int y)
{
	int flag ;
	for(int i = x ; i < y ; i++)
	{
		flag = 0;
		for(int j = 2 ; j <= 9 ; j++)
		{
			if((i%j==0)&&(j!=i))

			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			printf("%d ",i);

	}
}
void main()
{
	int x,y;
	printf("Enter two numbers(intervals):");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	fflush(stdout);
	printf("Prime Numbers between %d and %d are:",x,y);

	primeNumbers(x,y);


}

