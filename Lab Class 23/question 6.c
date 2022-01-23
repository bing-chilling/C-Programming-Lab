#include <stdio.h>

void main()
{
	unsigned int a,b;
	printf("Enter positive integer values of variable 'a' and 'b':");
	scanf("%d %d",&a,&b);
	printf("Value of a= %d and b= %d\n",a,b);
	a= a^b;
	b= a^b;
	a= a^b;
	printf("New value of a= %d and b= %d\n",a,b);
}
