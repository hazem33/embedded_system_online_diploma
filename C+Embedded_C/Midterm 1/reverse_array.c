/*
 * reverse_array.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */
#include<stdio.h>

void reverse (int x[100],int y)
{
	for (;(y-1)>=0;y--)
		printf("%d ",x[y-1]);
}

int main()
{
	int x[100],y;
	printf("enter the length of the array: \n");
	fflush(stdout);
	scanf("%d",&y);
	printf("enter the array: \n");
	fflush(stdout);
	for (int i=0;i<y;i++)
		scanf("%d",&x[i]);
	reverse(x,y);
	return 0;
}
