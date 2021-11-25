//Display whether a number is prime or not
#include<stdio.h>
int main()
{
	int a,i,n=1;
	printf("Enter an integer: ");
	scanf("%d",&a);
	for (i=2;i<a/2;i++)
		{
		if (a%i==0)
			{
			n=0;
			break;
			}
		}
	if (n)
		printf("The given integer is a prime number\n");
	else
		printf("The The given integer is NOT a prime number\n");
	
	return 0;
}
