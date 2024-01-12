/*
 * foot_inch.c
 *
 *  Created on: Dec 28, 2023
 *      Author: dell
 */

#include <stdio.h>

struct distance
{
	int feets;
	float inches;
}z;

struct distance data_in(int c)
{
	printf("enter information for distance no.%d: \n",c);
	printf("enter feet: \n");
	fflush(stdout);
	scanf("%d",&z.feets);
	printf("enter inches: \n");
	fflush(stdout);
	scanf("%f",&z.inches);
	return z;
}

void sum(struct distance x,struct distance y)
{
	struct distance z={x.feets+y.feets,x.inches+y.inches};
	if (z.inches>11)
	{
		z.feets+=1;
		z.inches-=12;
	}
	printf("sum of distances= %d ft %.2f in",z.feets,z.inches);
}

int main()
{
	struct distance x,y;
	x= data_in(1);
	y= data_in(2);
	sum(x,y);
	return 0;
}
