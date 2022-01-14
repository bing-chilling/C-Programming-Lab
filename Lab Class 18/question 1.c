//Q.1) Write a Program in 'C' to input two numbers and add them using pointer.
#include<stdio.h>

void main()
{
	int a,b,sum,*c,*d;
	printf("Enter 2 integers: ");
	scanf("%d %d",&a,&b);
	c=&a;
	d=&b;
	printf("The sum of %d and %d is: %d\n",a,b,*c+*d);
}
