//Recursive function to find out gcd of 2 numbers
#include <stdio.h>

int hcf(int n1,int n2)
{
	return (n1%n2==0?n2:hcf(n2,n1%n2));
}

void main()
{
	int a,b,n1,n2;
	printf("Enter 2 integers you want to find hcf of: ");
	scanf("%d %d",&a,&b);
	a<b?((n1=b)&&(n2=a)):((n2=b)&&(n1=a));
	printf("The hcf of %d and %d comes out to be: %d\n",a,b,hcf(n1,n2));
}
