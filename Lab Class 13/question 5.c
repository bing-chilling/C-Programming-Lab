//Two numbers are entered through the keyboard. WAP to find the value of one number raised to the power of another
#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("Enter number and the power of the number respectively: ");
	scanf("%d %d",&a,&b);
	c=a;
	for (i=1;i<b;i++)
		a=a*c;
	printf("\n%d\n",a);

	return 0;
}
