/*Given three inputs (a, b, c), display 1 if those are sides of an isosceles triangle else display 0 on the screen.*/
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
	d= ((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a)); //Here, equilateral is not takes as isosceles
	printf("If the given sides belong to an isosceles triangle, then the output will be 1, else, 0: %d\n", d);
	
	return 0;
}
