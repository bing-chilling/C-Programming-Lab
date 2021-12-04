//WAP to find the octal equivalent of the entered number.
#include<stdio.h>
int main()
{
	int n,c,r,ten;
	printf("Enter integer to be converted: ");
	scanf("%d",&n);
	for (c=0,ten=1;0<n;n=n/8,ten=ten*10)
		{
		r= n%8;
		c= r*ten +c;
		}
	printf("%d is the octal value of the given number\n",c);
	
	return 0;
}
