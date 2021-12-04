//Write a program in 'C' to find out factorial of a number using user defined function.
#include<stdio.h>

void factorial(int n)
{
	int i,j;
	for(i=1,j=1;i<n;i++)
		j=j*i;
	printf("%d\n",n*j);
}

void main()
{
	int a,b;
	start:
	printf("Enter number you want factorial of: ");
	scanf("%d",&a);
	factorial(a);
	printf("Would you like to continue?(1:yes, 0:no)");
	scanf("%d",&b);
	if (b==1)
		goto start;
}
