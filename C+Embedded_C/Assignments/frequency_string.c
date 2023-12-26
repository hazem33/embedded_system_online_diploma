/*
 * frequency_string.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>
#include <string.h>

int main()
{
	char a[100],b;
	int c=0;
	printf("enter the sentence: ");
	fflush(stdout);
	gets(a);
	printf("enter the letter: ");
	fflush(stdout);
	scanf("%c",&b);
	for (int i=0;i<strlen(a);i++)
		b==a[i]?c++:1;
	printf("frequency of %c is: %d",b,c);
	return 0;
}
