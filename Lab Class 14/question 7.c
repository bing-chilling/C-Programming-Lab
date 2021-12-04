//Write a program in 'C' to find out 'a' to the power 'b' using user-defined function.
#include<stdio.h>

void power(int a, int b)
{
	int i,c;
	c=a;
	for (i=1;i<b;i++)
		c=c*a;
	printf("%d\n",c);
}

void main()
{
	int a,b,c;
	start:
	printf("Enter the number and the power of the number: ");
	scanf("%d %d",&a,&b);
	power(a,b);
	printf("Would you like to continue?(1:yes, 0:no): ");
	scanf("%d",&c);
	if (c==1)
		goto start;
}
