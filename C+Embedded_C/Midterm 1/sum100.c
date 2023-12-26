/*
 * sum100.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */

#include <stdio.h>

int sum (void)
{
	static int x=1,s;
	s+=x;
	if (x<100)
	{
		x++;
		sum();

	}
	return s;
}

int main()
{
	printf("%d",sum());

	return 0;
}
