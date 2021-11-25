//Write a program in 'C' to print multiplication table of 'n' in proper format
#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter an integer: ");
	scanf("%d",&a);
	for (i=1;i<11;i++)
		printf("%d x %d = %d\n",a,i,a*i);
	
	return 0;
}
