/*
 * pointer_structure.c
 *
 *  Created on: Jan 4, 2024
 *      Author: dell
 */

#include<stdio.h>

struct employee
{
	char name[50];
	int id;
};

int main()
{
	struct employee x[3];
	struct employee* arr_p[3]={x,x+1,x+2};
	struct employee *(*p)[]=&arr_p;
	printf("enter the data:\n");
	fflush(stdout);
	for(int i=0;i<3;i++)
		scanf("%s %d",(*p)[i]->name,&(*p)[i]->id);
	for(int i=0;i<3;i++)
		printf("%s %d\n",arr_p[i]->name,arr_p[i]->id);
	return 0;
}
