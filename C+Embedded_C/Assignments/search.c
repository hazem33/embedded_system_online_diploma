/*
 * search.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>

int main()
{
	int a[100],n,x;
	printf("enter no.of elements: \n");
	fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the element to be searched: ");
	fflush(stdout);
	scanf("%d",&x);
	int i;
	for (i=0;i<n;i++)
	{
		if (x==a[i])
			break;
	}
	if (i<n)
		printf("%d position is %d",x,i+1);
	else
		printf("number is not found");
	return 0;
}
