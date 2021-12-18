//Q.8) Write a program in 'C' to generate fibonacci series upto nth term using recursive function.
#include <stdio.h>


int fibonacci(int n)
{
	return (n==2||n==1?1:fibonacci(n-1)+fibonacci(n-2));
}

void main()
{
	int a,i;
	printf("Enter integer: ");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
		printf("%d ",fibonacci(i));
	printf("\n");
}

