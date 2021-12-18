//Q.2) Write a program in 'C' to find out sum of two numbers using user-defined function. (With Function Prototype)
#include<stdio.h>

void sum();

void main()
{
	sum();
}

void sum()
{
	int a,b;
	printf("Enter two integers to be added: ");
	scanf("%d %d",&a,&b);
	printf("The sum: %d\n",a+b);
}
