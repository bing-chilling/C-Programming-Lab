#include <stdio.h>

union ABC
{
	int b;
	char a;
};

void main()
{
	union ABC ob;
	ob.a= 'A';
	printf("ob.a= %c, ascii= %d\n",ob.a,ob.a);
	ob.b= 1088;
	printf("ob.b= %d\n",ob.b);
	ob.a= 'A';
	ob.b= 1088;
	printf("\nob.a= %c, %d\nob.b= %d\n",ob.a,ob.a,ob.b);
}
