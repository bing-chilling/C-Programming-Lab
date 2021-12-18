//Recursive function to find out factorial of a number n
#include <stdio.h>

int factorial (int n)
{
	return (n==1?n:n*factorial(n-1));
}

void main()
{
	int n;
	printf("Enter number you want to find factorial of: ");
	scanf("%d",&n);
	printf("The factorial of %d is %d\n",n,factorial(n));
}
