/*
 * student_data_array.c
 *
 *  Created on: Dec 28, 2023
 *      Author: dell
 */


#include <stdio.h>
#include <string.h>

struct Sstudent
{
char name[20];
int roll;
float marks;
}y;

struct Sstudent data_in (int c)
{
	y.roll=c+1;
	printf("for student roll %d\n",y.roll);
	printf("enter student name: \n");
	fflush(stdout);
	scanf("%s",y.name);
	printf("enter student marks: \n");
	fflush (stdout);
	scanf("%f",&y.marks);
	return y;

}

void data_print (struct Sstudent x)
{
	printf("(roll %d \n",x.roll);
	printf("student name: %s \n",x.name);
	printf("student marks: %.1f)\n\n",x.marks);
}

int main()
{
	struct Sstudent x[10];
	printf("enter info of students: \n\n");
	for(int i=0;i<10;i++)
		x[i]=data_in(i);
	for(int i=0;i<10;i++)
		data_print(x[i]);

	return 0;
}
