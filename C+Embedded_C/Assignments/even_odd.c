/*
 * even_odd.c
 *
 *  Created on: Dec 18, 2023
 *      Author: hazem
 */

#include <stdio.h>

int main()
{
	int x;
	printf("please enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	(x != 0) ? (x % 2 == 0) ? printf ("even"): printf("odd") : printf("zero");
	return 0;
}
