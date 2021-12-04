//Write a program in 'C' to print following number series using user-defined functions: 1,2,3,4...n.
#include<stdio.h>

void series(int n)
{
	int i;
	for (i=1;i<n;i++)
		printf("%d, ",i);
	printf("%d.",n);
	printf("\n");
}

int main()
{
	int a;
	printf("Enter the first n natrual series you want to print: ");
	scanf("%d",&a);
	series(a);
	
	return 0;
}
