/*
 * sqrroot.c
 *
 *  Created on: Dec 26, 2023
 *      Author: dell
 */
#include <stdio.h>


float rounding (float x)
{
	int y;
	x+=0.00005;
	x*=10000;
	y=x;
	x=y;
	x/=10000;
	return x;
}
float square_root(int x)
{
	float root,result,max,min;
	max=x;
	min=0.0;

	while(1)
	{
	root=(max+min)/2;
	result=root*root;
	if ((result==x)||((result>x)&&(result<(x+0.001))))
		break;
	else if (result>x)
		max=rounding(root);
	else if (result<x)
		min=rounding(root);
	}
	return root;
}




int main()
{
	int x;
	printf("enter a number: \n");
	fflush(stdout);
	scanf("%d",&x);

	printf("the square root=: %.3f",square_root(x));

	return 0;
}
