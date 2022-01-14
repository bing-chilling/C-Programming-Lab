//Q.2) Write a Program in 'C' to find out factorial of a number using pointer.
#include<stdio.h>

void main()
{
	int a,*b,fac=1,i;
	printf("Enter number to find factorial of: ");
	scanf("%d",&a);
	b=&a;
	for (i=0;i<a;i++)
		fac*= (*b-i);
	printf("Factorial of %d is: %d\n",a,fac);
}
