/*
 * factorial.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include <stdio.h>

int main ()
{
	int x , i=1 , factorial=1;
	printf("Enter a number:");
	fflush (stdout);
	scanf ("%d",&x);
	if (x < 0)
		printf("error: negative number");
	else
	{
		while(i<=x)
			{
			factorial *=i;
			i++;
			}
		/*for(i ; i<=x; ++i)
			factorial *=i;*/
		printf("the factorial is: %d",factorial);
	}
	return 0;
}
