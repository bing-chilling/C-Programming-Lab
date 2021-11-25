//Write a program in 'C' to calculate the following product in series and display the result: F=1*2*3..*n
#include<stdio.h>
int main()
{
	int i,n,x=1,c;
	printf("Enter the number of 1st consecutive natural numbers to be multiplied: ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
		{
		c=x*i;
		x=c;
		}
	printf("Multiplication = %d\n",x);
	
	return 0;
}
