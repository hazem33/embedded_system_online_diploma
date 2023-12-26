/*
 * strlength.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>

int main()
{
	char a[100];
	printf("enter the string: ");
	fflush(stdout);
	gets(a);
	//scanf("%s",a);
	int i=0;
	while(i<100)
	{
		if (a[i]=='\0')
			break;
		i++;
	}
	printf("%d",i);
	return 0;
}
