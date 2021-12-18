//Recursive function to find out nth fibonacci number
#include <stdio.h>

int sequence(int n)
{
	return (n==1||n==2?1:sequence(n-1)+sequence(n-2));
}

void main()
{
	int n;
	printf("Enter integer: ");
	scanf("%d",&n);
	printf("The %dth fibonacci number is %d\n",n,sequence(n));
}
