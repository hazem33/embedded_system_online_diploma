/*
 * add.c
 *
 *  Created on: Dec 17, 2023
 *      Author: hazem
 */

#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	//fflush(stdout);
	printf("the sum is: %d",x+y);
	return 0;
}
