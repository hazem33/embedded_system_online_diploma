/*
 * Input_output.c
 *
 *  Created on: Dec 17, 2023
 *      Author: hazem
 */

#include <stdio.h>

void main()
{
	printf("Enter an integer:");
	int x;
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	printf("you entered:%d",x);

}
