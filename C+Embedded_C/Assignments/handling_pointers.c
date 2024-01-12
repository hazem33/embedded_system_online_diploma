/*
 * handling_pointers.c
 *
 *  Created on: Jan 4, 2024
 *      Author: dell
 */

#include<stdio.h>

int main()
{
	int m =29;
	printf("Address of m is: %p\nValue of m is: %d\n\n",&m,m);
	printf("Now ab is assigned with the address of m.\n");
	int* ab=&m;
	printf("Address of pointer ab is: %p\ncontent of pointer ab is: %d\n\n",ab,*ab);
	printf("The value of m assigned to 34 now.\n");
	m=34;
	printf("Address of pointer ab is: %p\ncontent of pointer ab is: %d\n\n",ab,*ab);
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	*ab=7;
	printf("Address of m is: %p\nValue of m is: %d\n\n",&m,m);
	return 0;
}
