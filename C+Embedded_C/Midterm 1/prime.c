/*
 * prime.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */

#include<stdio.h>

int prime(int x )
{
	int counter=0 ;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
			counter++;
	}
	if (counter>1)
		return 0;
	else
		return 1;
}

int main()
{
	int x,y;
	printf("enter the boundaries: \n");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	for(;x<=y;x++)
	{
		if(prime(x))
			printf("%d ",x);
	}
	return 0;
}
