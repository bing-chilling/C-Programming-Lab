#include <stdio.h>

typedef unsigned int data;

void main()
{
	data a=4, b=1, c; // a= 0100, b= 0001
	printf("a= %d, b=%d\n",a,b);
	c= a&b;
	printf("c= a&b = %d\n",c);
	c= a|b;
	printf("c= a|b = %d\n",c);
	c= a^b;
	printf("c= a^b = %d\n",c);
	c= ~a;
	printf("c= ~a = %d\n",c);
	c= b<<2;
	printf("c= b<<2 = %d\n",c);
	c= b>>2;
	printf("c= b>>2 = %d\n",c);
}
