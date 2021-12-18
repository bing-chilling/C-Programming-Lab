//Q.4) Write a program in 'C' to find average marks obtained by a class of 20 students in a test and count no. of students scored O Grade (90 and above). 
#include <stdio.h>

void count();

int main()
{
	count();
}

void count()
{
	int i,m,b,topper;
	float c;
	for (i=c=topper=0;i<20;i++)
		{
		printf("Enter the marks of student %d: ",i+1);
		scanf("%d",&b);
		if (90<=b)
			topper++;
		c+=b;
		}
	printf("Average marks of this class: %f\n",c/20);
	printf("Students which scored above 90: %d\n",topper);
}
