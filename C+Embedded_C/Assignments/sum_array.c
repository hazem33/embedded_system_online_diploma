/*
 * sum_array.c
 *
 *  Created on: Dec 23, 2023
 *      Author: dell
 */

#include<stdio.h>

int main()
{

	int a[5][10][10]={0};
	int z,s;

	printf("Enter the number of matrices to add: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&z);
	fflush(stdin);fflush(stdout);
	printf("Enter the size of matrices to add: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s);
	fflush(stdin);fflush(stdout);

	for (int i=0;i<z;++i)
	{
		printf("please enter matrix no.%d:\n",i+1);
		fflush(stdout);
		for(int j=0;j<s;j++)
		{
			for (int k=0;k<s;k++)
			{
				printf("%c%d%d=",i+65,j+1,k+1);
				fflush(stdout);
				scanf ("%d",&a[i][j][k]);
			}
		}
	}

	fflush(stdin);fflush(stdout);
	printf("the sum is:\n");

	for (int i=0;i<z;i++)
	{
		for(int j=0;j<s;j++)
		{
			for (int k=0;k<s;k++)
				a[4][j][k]+=a[i][j][k];
		}
	}

	for(int j=0;j<s;j++)
	{
		for (int k=0;k<s;k++)
		{
			printf("%d\t",a[4][j][k]);
		}
		printf ("\n");
	}

	return 0;

}
