/*
 * reverse_array_pointer.c
 *
 *  Created on: Jan 4, 2024
 *      Author: dell
 */
#include <stdio.h>



int main()
{
	int i;
	int x[15];
	int* px=x;
	printf("please enter number of elements: ");
	fflush(stdout);
	scanf("%d",&i);
	printf("please the elements: \n");
	for(int j=0;j<i;j++)
	{
		printf("element %d= ",j+1);
		fflush(stdout);
		scanf("%d",px++);
	}
	printf("the reverse of the array: \n");
	for(int j=0;j<i;j++)
		printf("element %d =%d\n",i-j,*(--px));

	return 0;
}
