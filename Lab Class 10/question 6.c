/*WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float D,x1,x2;
	here:
	printf("Enter the value of coefficient of x^2: ");
	scanf("%d",&a);
	printf("Enter the value of coefficient of x: ");
	scanf("%d",&b);
	printf("Enter the value of constant c: ");
	scanf("%d",&c);
	D= (b*b)-4*a*c;
	if (a==0)
		{
		printf("Invalid, quadritice not formed\n");
		goto here;
		}
	if (D==0)
		{
		x1=x2=(-b/2*a);
		printf("This quadratic equation has a single root= %f\n",x1);
		}
	else if (D<0)
		printf("This quadratic equation has no roots\n");
	else
		{
		x1=-(b+sqrt(D))/(2*a);
		x2=((-b)+sqrt(D))/(2*a);
		printf("The roots of the given quadratic are: %f, %f\n",x1,x2);
		}
	return 0;
}
	
