/*
 * reverse_string.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */

#include<stdio.h>
#include<string.h>

void reverse(char x[])
{
	char y[100];
	int i=0,j=0,k=0;
	for(;i<strlen(x);i++)
	{
		if (x[i]==' ')
			break;
	}
	i++;
	for(;i<strlen(x);i++)
	{
		y[j]=x[i];
		j++;
	}
	y[j]=' ';
	j++;
	for(;j<strlen(x);j++)
	{
		y[j]=x[k];
		k++;
	}
	y[strlen(x)]='\0';
	printf("%s",y);

}

int main()
{
	char x[100];
	printf("enter the string: \n");
	fflush(stdout);
	gets(x);
	reverse(x);
	return 0;
}

