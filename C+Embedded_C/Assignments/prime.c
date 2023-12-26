/*
 * okay.c
 *
 *  Created on: Dec 25, 2023
 *      Author: dell
 */
# include <stdio.h>

static int c=2;

void prime_num (int x,int y)
{
	if (x%c!=0)
		{
		c++;
		if (c<x)
			prime_num(x,y);
		else
		{
			printf("%d ",x);
			c=2;
			x++;
			prime_num(x,y);
		}
		}
	else
	{
		x++;
		c=2;
		if (x<=y)
			prime_num(x,y);
	}
}

int main ()
{
	int x,y;
	printf("please enter the boundaries: \n");
	fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("prime numbers between %d and %d are: ",x,y);
	prime_num(x,y);
	return 0;
}
