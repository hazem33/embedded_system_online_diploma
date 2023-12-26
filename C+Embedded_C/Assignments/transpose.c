/*
 * transpose.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>

int main ()
{
	int x,y;
	float a[100][100];
	printf("enter the size of the matrix:");
	fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("enter elements of the matrix\n");
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("enter a%d%d: ",i,j);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("the matrix is: \n");
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the transpose is: \n");
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++)
		{
			printf("%f\t",a[j][i]);
		}
		printf("\n");
	}

}
