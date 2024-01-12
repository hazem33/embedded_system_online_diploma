/*
 * reverse_pointer.c
 *
 *  Created on: Jan 4, 2024
 *      Author: dell
 */

#include<stdio.h>

void reverse (char*x)
{
	int i=0;
	while(1)
	{
		if (*x=='\0')
			break;
		x++;
		i++;
	}
	for(int j=1;j<=i;j++)
		printf("%c",*(x-j));
}

int main()
{
	char x[100];
	char* px=x;
	printf("please enter a string: ");
	fflush(stdout);
	scanf("%s",px);
	printf("the reverse of the string: ");
	reverse(px);
	return 0;
}
