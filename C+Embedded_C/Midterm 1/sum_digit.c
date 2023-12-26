/*
 * test.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */
#include <stdio.h>

int digit_sum(int x)
{
	static int rem,sum;
	rem=x%10;
	sum+=rem;
	x/=10;
	if(x!=0)
		digit_sum(x);
	else
		return sum;
}

int main()
{
	int x;
	printf("enter a number: \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("the sum of its digits=: %d",digit_sum(x));
	return 0;
}
