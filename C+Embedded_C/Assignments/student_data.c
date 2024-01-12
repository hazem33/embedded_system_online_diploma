/*
 * student_data.c
 *
 *  Created on: Dec 28, 2023
 *      Author: dell
 */
#include <stdio.h>
#include <string.h>

struct Sstudent
{
char name[50];
int roll;
float marks;
};

struct Sstudent data_in (struct Sstudent x)
{
	printf("enter student name: ");
	fflush(stdout);
	gets(x.name);
	printf("enter student roll: ");
	fflush (stdout);
	scanf("%d",&x.roll);
	printf("enter student marks: ");
	fflush (stdout);
	scanf("%f",&x.marks);
	return x;

}

void data_print (struct Sstudent x)
{
	printf("student name: %s \n",x.name);
	printf("student roll: %d \n",x.roll);
	printf("student marks: %.1f \n",x.marks);
}

int main()
{
	struct Sstudent x;
	x=data_in(x);
	data_print(x);
	return 0;
}
