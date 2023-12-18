/*
 * Ascii.c
 *
 *  Created on: Dec 18, 2023
 *      Author: hazem
 */

#include<stdio.h>

int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("The Ascii is:%d",x);
	return 0;
}
