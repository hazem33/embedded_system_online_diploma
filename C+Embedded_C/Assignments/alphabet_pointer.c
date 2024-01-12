/*
 * alphabet_pointer.c
 *
 *  Created on: Jan 4, 2024
 *      Author: dell
 */

#include<stdio.h>


char increment (char* x)
{
	(*x)++;
	return (*x);
}

char(*point_fun)(char* x);


void print_alphabet (char(*p)(char*),char*i)
{
	printf("%c ",*i);
	*i=p(i);

}



int main()
{
	point_fun=increment;
	char i='A';
	char* pi=&i;
	printf("the alphabets are:\n");

	while (i<='Z')
		print_alphabet(point_fun,pi);
	return 0;
}
