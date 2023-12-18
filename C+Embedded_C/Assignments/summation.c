/*
 * summation.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include <stdio.h>

int main ()
{
	int x , i=0 , sum=0;
	printf("Enter a number:");
	fflush (stdout);
	scanf ("%d",&x);
	while(i<=x)
		{
		sum +=i;
		i++;
		}
	/*for(i ; i<=x; ++i)
		sum +=i;*/
	printf("the sum is: %d",sum);
	return 0;
}
