/*
 * reverse_sentence.c
 *
 *  Created on: Dec 25, 2023
 *      Author: dell
 */
#include <stdio.h>
#include <string.h>

static char y[100];
static int i=0,j=1;

void reverse (char x[])
{
	y[i]=x[strlen(x)-j];
	if (i<strlen(x))
	{
		i++;
		j++;
		reverse (x);
	}
	else
	{
		y[strlen(x)]='\0';
		printf("%s",y);
	}

}

int main()
{
	char x[100];
	printf("please enter a sentence: \n");
	fflush(stdout);
	gets(x);
	reverse(x);
	return 0;
}
