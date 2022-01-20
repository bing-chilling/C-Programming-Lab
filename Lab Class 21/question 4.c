//Q.4) Write a program in 'C' to create a structure DOB having data members day, month, and year, then create another structure student having data members rollno, name and DOB. Now enter the details of a student and display this using nested structure. 

#include<stdio.h>

struct dob
{
	char day[10], month[10];
	unsigned int year;
};

struct student
{
	unsigned int roll;
	char name[50];
	struct dob birth;
};

void main()
{
	int i,a;
	printf("Enter number of students to be registered: ");
	scanf("%d",&a);
	struct student reg[a];
	for (i=0;i<a;i++)
	{
		printf("Enter name and roll number of student%d : ",i+1);
		scanf("%s %d", reg[i].name, &reg[i].roll);
		printf("Enter day, month and year of birth of student%d :\n",i+1);
		scanf("%s %s %d", reg[i].birth.day, reg[i].birth.month, &reg[i].birth.year);
	}
	for (i=0;i<a;i++)
		printf("The name, roll number, and date of birth of the student%d is:\n%s, %d || %s, %s, %d\n", i+1, reg[i].name, reg[i].roll, reg[i].birth.day, reg[i].birth.month, reg[i].birth.year);
}
