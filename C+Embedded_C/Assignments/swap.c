/*
 * swap.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include <stdio.h>

int main ()
{
	int a,b,c;
	printf("Enter the value of a:");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter the value of b:");
	fflush(stdout);
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The new value of a is: %d \n",a);
	printf("The new value of b is: %d",b);
	return 0;
}
