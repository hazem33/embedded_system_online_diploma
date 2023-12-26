/*
 * max_ones.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */
#include<stdio.h>

int max_ones (int x)
{
	int y=0,counter=0,max=0;
	for(;y<16;y++)
		if(x&(1<<y))
			{
			counter++;
			max<counter? max=counter:1;
			}
		else
			counter=0;
	return max;
}



int main()
{
	int x;
	printf("enter a number: \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("the max ones=: %d",max_ones(x));
	return 0;
}
