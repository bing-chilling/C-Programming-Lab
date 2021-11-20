#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter value of side A: ");
	scanf("%d",&a);
	printf("Enter value of side B: ");
	scanf("%d",&b);
	printf("Enter value of side C: ");
	scanf("%d",&c);
	d= ((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a));
	printf("If the given sides belong to an isosceles triangle, then the output will be 1, else, 0: %d\n", d);
	
	return 0;
}
