/*
 * reverse.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100];
	printf("enter the string: ");
	fflush(stdout);
	gets(a);
	for (int i=0;i<strlen(a);i++)
		{
		b[i]=a[strlen(a)-i-1];
		}
	b[strlen(a)]='\0';
	printf("%s",b);

	return 0;
}
