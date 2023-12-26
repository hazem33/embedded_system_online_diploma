/*
 * power.c
 *
 *  Created on: Dec 25, 2023
 *      Author: dell
 */

#include<stdio.h>

static int result=1;

int power(int x, int y)
{

	if (y>0)
	{
		result*=x;
		y--;
		power(x,y);
	}
	else
		return result;
}

int main()
{
	int x,y;
	printf("enter the base number then a positive power: \n");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("the result= %d",power(x,y));
	return 0;
}
