/*
 * insert_element.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>

int main()
{
	int a[100],n,x,p;
	printf("enter no.of elements: \n");
	fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the number you like to add\n");
	fflush(stdout);
	scanf("%d",&x);
	printf("enter the position you like to add it in\n");
	fflush(stdout);
	scanf("%d",&p);
	for(int i=0;n-i>=p;i++)
	{

		a[n-i]=a[n-i-1];

	}
	a[p-1]=x;
	for(int i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}

}
