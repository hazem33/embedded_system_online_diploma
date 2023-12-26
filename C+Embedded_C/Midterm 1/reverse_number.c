/*
 * reverse_number.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */

#include<stdio.h>
#include<math.h>

int reverse (int x)
{
	int arr[10],i=0,y=0,j=0;
	while(x!=0)
	{
		arr[i]=x%10;
		x/=10;
		i++;
	}
	i--;
	for(;i>=0;i--)
	{
		y+= arr[j]*(pow(10,i));
		j++;
	}
	return y;
}



int main()
{
	int x=0;
	printf("enter a number: \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("the no. reversed=: %d",reverse(x));

	return 0;
}
