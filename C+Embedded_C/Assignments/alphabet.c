/*
 * alphabet.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include<stdio.h>

int main()
{
	char x;
	printf("please enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	if ( (x > 64 && x < 91) || (x > 96 && x < 123 ) )
	{
		printf("%c is an alphabet",x);
	}
	else
		printf("%c is not an alphabet",x);

	return 0;
}

