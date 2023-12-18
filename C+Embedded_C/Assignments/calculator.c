/*
 * calculator.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include <stdio.h>

int main ()
{
	float a,b;
	char x;
	printf("please enter the two numbers:");
	fflush (stdout);
	scanf("%f %f",&a,&b);
	fflush(stdin);
	printf("please enter the operation:");
	fflush (stdout);
	scanf("%c",&x);

	switch (x)
	{
		case '+':
		{
			printf("%f %c %f = %f",a,x,b,a+b);
			break;
		}
		case '-':
		{
			printf("%f %c %f = %f",a,x,b,a-b);
			break;
		}
		case '*':
		{
			printf("%f %c %f = %f",a,x,b,a*b);
			break;
		}
		case '/':
		{	printf("%f %c %f = %f",a,x,b,a/b);
			break;
		}
		default:
		{
			printf("wrong input");
			break;
		}
	}
	return 0;
}

