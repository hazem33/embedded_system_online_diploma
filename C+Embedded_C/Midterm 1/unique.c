/*
 * unique.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */

#include<stdio.h>

int unique(int x[],int y)
{
	static int j;
	int counter=0;
	for (int i=0;i<y;i++)
	{
		if (x[j]==x[i])
			counter++;
	}
	if (counter>1)
		{
		j++;
		unique(x,y);
		}
	else if (j==y)
		return 0;
	else
		return x[j];
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
	printf("%d",unique(x,y));
	return 0;
}
