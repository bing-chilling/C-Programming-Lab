//Q.2) Write a function in 'C' to create a structure employee having data members as name, age, address and salary. Take data for n employee in an array and find the average salary.
#include<stdio.h>

struct employee
{
	char name[50], address[30];
	unsigned int age, salary;
};

void main()
{
	int i,a;
	double sum,avg;
	printf("Enter number of employees to be registered: ");
	scanf("%d",&a);
	struct employee corp[a];
	for (i=0;i<a;i++)
	{
		printf("Enter name, age, address and salary of \"employee %d\" respectively\n",i+1);
		scanf("%s %d %s %d",corp[i].name, &corp[i].age, corp[i].address, &corp[i].salary);
	}
	for (i=0,sum=0;i<a;i++)
		sum+= corp[i].salary;
	avg= sum/a;
	printf("The average salary of the employees equates to %f\n",avg);
}
