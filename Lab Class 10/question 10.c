/*WAP to input any three integers distinct and display the biggest of three integers using ternary operator*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter 3 integers: ");
	scanf("%d %d %d",&a,&b,&c);
	d= a<b?b:a; 
	e= d<c?c:d;
	printf("The greatest integer is: %d\n",e);
	return 0;
}
