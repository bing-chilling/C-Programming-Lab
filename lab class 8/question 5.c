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
	d= (((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(b*b)+(a*a)));
	printf("If the given sides are of a right-angled triangle, the output will be 1, else 0: %d\n",d);
	
	return 0;
}
