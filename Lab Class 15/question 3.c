//Recursive function sum of digits of a k digit number n
#include <stdio.h>

int sum(int n)
{
	return (n<10?n:n%10+sum(n/10));
}

void main()
{
	int n;
	printf("Enter integer: ");
	scanf("%d",&n);
	printf("The sum of digits of the integers %d is %d\n",n,sum(n));
}
