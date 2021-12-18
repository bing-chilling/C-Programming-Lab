//Q.7) Write a program in 'C' to find out GCD of 3 numbers using recursive function.
#include <stdio.h>

int hcf(int n1,int n2, int n3)
{
	int a;
	a= ( (n2%n3==0) ? ( (n1%n3==0) ? n3 : hcf(n3,n2,n3%n1) ) : hcf(n1,n3,n2%n3) );
	return (a);
}

void main()
{
	int a,b,c,n1,n2,n3;
	printf("Enter 3 integers you want to find hcf of: ");
	scanf("%d %d %d",&a,&b,&c);
	a<b? (n2=b)&&(n3=a) : (n3=b)&&(n2=a);
	int temp2=n2,temp3=n3;
	n2<c? (n1=c) : (c<n3? (n3=c) && (n1=temp2) && (n2=temp3) : (n2=c) && (n1=temp2) );
	printf("The hcf of %d, %d and %d comes out to be: %d\n",a,b,c,hcf(n1,n2,n3));
}
