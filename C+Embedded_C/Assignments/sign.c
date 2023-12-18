/*
 * sign.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include <stdio.h>

int main ()
{
	float x ;
	printf( "please enter a number:" );
	fflush ( stdout );
	scanf ( "%f", &x );
	x != 0 ? x > 0 ? printf("positive") : printf ("negative") : printf ("zero");
	return 0;
}
