/*
 * swap_2.c
 *
 *  Created on: Dec 18, 2023
 *      Author: hazem
 */

#include<stdio.h>

int main ()
{
	int a,b;
	printf("Enter the value of a:");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter the value of b:");
	fflush(stdout);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The new value of a is: %d \n",a);
	printf("The new value of b is: %d",b);
	return 0;
}
