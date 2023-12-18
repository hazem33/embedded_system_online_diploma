/*
 * multiply.c
 *
 *  Created on: Dec 18, 2023
 *      Author: hazem
 */

#include <stdio.h>

int main()
{
	float x , y;
	printf("Enter two numbers:");
	fflush (stdout);
	scanf("%f%f" ,&x,&y);
	printf("the product is: %f ",x*y);
	return 0;
}
