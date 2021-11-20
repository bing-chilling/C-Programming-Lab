/*Given three inputs a,b,c, check whether they are sides of a triangle or not*/
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
	if (((a+b)>c)&&((a+c)>b)&&((b+c)>a))
		printf("These values satisfy the triangle side property\n");
	else
		printf("These sides cannot represent a triangle\n");
		
	return 0;
}
