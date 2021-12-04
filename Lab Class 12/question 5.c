//Find out reverse of a number and chech whether its a palindrome or not.
#include<stdio.h>
int main()
{
	int a,b=0,c;
	printf("Enter integer to be reversed: ");
	scanf("%d",&a);
	c=a;
	while (a>0)
		{
		b=b*10+a%10;
		a=a/10;
		}
		
	printf("The reversed integer is: %d\n",b);
	if (b==c)
		printf("This integer is a palindrome.\n");
	else
		printf("This integer is NOT a palindrome\n");
	
	return 0;
}
