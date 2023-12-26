/*
 * average_array.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>

int main()
{
	float a[100],sum=0,average;
	int n;
	printf("please enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		printf("enter number: \n");
		fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	printf("%f",average);
	return 0;
}
