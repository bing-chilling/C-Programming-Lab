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
	d=(((a+b)>c)&&((a+c)>b)&&((b+c)>a));
	printf("Checking the triangle property for the given values... (1 for yes, 2 for not)\n%d\n",d);
	
	return 0;
}
