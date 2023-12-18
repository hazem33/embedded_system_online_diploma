/*
 * vowel.c
 *
 *  Created on: Dec 18, 2023
 *      Author: dell
 */

#include<stdio.h>

int main()
{
	char x;
	printf("please enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	if ( (x > 64 && x < 91) || (x > 96 && x < 123 ) )
	{
		switch(x)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("%c is vowel",x);
				break;
			default:
				printf("%c is constant",x);
				break;
		}
	}
	else
		printf("%c is not an alphabet",x);

	return 0;
}
