/*
 * test.c
 *
 *  Created on: Dec 29, 2023
 *      Author: dell
 */

#include <stdio.h>
#define Pi 3.1415
#define area(r) Pi*r*r

int main()
{
	float radius;
	printf("please enter the radius: \n");
	fflush(stdout);
	scanf("%f",&radius);
	printf ("area= %f",area(radius));
	return 0;
}
