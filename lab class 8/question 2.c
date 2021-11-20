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
	d=(((a+b)>c)&&((a+c)>b)&&((b+c)>a))*(a+b+c);
	printf("If the 3 value satisfy traingle property, the output will be the sum of the 3 side, else, 0:\n%d\n",d);
	
	return 0;
}
