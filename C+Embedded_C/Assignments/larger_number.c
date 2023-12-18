/*
 * larger_number.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include <stdio.h>

int main ()
{
	float x , y , z;
	printf( "please enter three numbers:" );
	fflush ( stdout );
	scanf ( "%f%f%f", &x , &y , &z );
	printf ("the largest number is: ");
	x > y ? x > z ? printf("%f",x) : printf("%f",z) : 1 ;
	y > x ? y > z ? printf("%f",y) : printf("%f",z) : 1 ;

	return 0;
}
