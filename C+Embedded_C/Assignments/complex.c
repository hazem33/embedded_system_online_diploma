/*
 * complex.c
 *
 *  Created on: Dec 28, 2023
 *      Author: dell
 */
#include <stdio.h>

struct complex
{
	float real;
	float im;
}z;

struct complex data_in(int c)
{
	printf("enter no.%d: \n",c);
	printf("enter real part: \n");
	fflush(stdout);
	scanf("%f",&z.real);
	printf("enter imaginary part: \n");
	fflush(stdout);
	scanf("%f",&z.im);
	return z;
}

void sum(struct complex x,struct complex y)
{
	struct complex z={x.real+y.real,x.im+y.im};

	printf("sum of the numbers= %.2f + %.2f i",z.real,z.im);
}

int main()
{
	struct complex x,y;
	x= data_in(1);
	y= data_in(2);
	sum(x,y);
	return 0;
}

