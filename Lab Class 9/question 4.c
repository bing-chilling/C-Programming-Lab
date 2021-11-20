/*WAP to print the largest of 3 given numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st integer: ");
	scanf("%d",&a);
	printf("Enter 2nd integer: ");
	scanf("%d",&b);
	printf("Enter 3rd integer: ");
	scanf("%d",&c);
	if ((b<a)&&(c<a))
	printf("%d is the greatest integer\n",a);
	else if ((a<b)&&(c<b))
	printf("%d is the greatest integer\n",b);
	else
	printf("%d is the greatest integer\n",c);
	
	return 0;
}
