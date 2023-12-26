/*
 * ones.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */

#include <stdio.h>

int ones(int x)
{
	int counter =0,y=0;
	while(y<16)
	{
		if(x&(1<<y))
			counter++;
		y++;
	}
	return counter;
}

int main()
{
	int x;
	printf("enter a number: \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("the no.of ones=: %d",ones(x));
	return 0;
}
