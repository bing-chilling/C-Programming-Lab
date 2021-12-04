/*Write a menu driven program which has following options:
1. Factorial of a number/
2. Prime or not.
3. Odd or Even
4. Exit*/
#include<stdio.h>
int main()
{
	int n,a,j,i,flag;
	start:
	printf("Enter the integer to be checked: ");
	scanf("%d",&n);
	printf("Which operation would you like to be performed?:\n1:Factorial\n2:Prime Check\n3:Odd or Even\n4:Exit\n");
	scanf("%d",&a);
	switch (a)
		{
		case 1:
			{
			for(i=1,j=1;i<n;i++)
				j=j*i;
			printf("%d\n",n*j);
			goto start;
			}
		case 2:
			{
			for (j=2,flag=1;j<n;j++)
				{
				if (n%j==0)
					{
					flag=0;
					break;
					}
				}
			if (flag)
				printf("%d is a prime number\n",n);
			else
				printf("%d is not a prime number\n",n);
			goto start;
			}
		case 3:
			{
			if (n%2==0)
				printf("%d is an even number\n",n);
			else
				printf("%d is an odd number\n",n);
			goto start;
			}
		case 4:
			break;
		}
	
	return 0;
}
			
			
			
			
