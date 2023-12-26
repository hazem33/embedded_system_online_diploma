/*
 * factorial_recursion.c
 *
 *  Created on: Dec 25, 2023
 *      Author: dell
 */

#include <stdio.h>

static int fact =1;

int factorial (int x)
{
	fact*=x;
	x--;
	if (x>1)
		factorial(x);
	else
		return fact;
	//return 0;
}

int main()
{
	int x;
	printf("enter a number: \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("the factorial of %d is: %d",x,factorial(x));
	return 0;
}
