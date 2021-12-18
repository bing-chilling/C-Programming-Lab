//Q.3) Write a program in 'C' to calculate 'a' to the power 'b' using user-defined function. (With Function Prototype)
#include <stdio.h>

int power();

void main()
{
	int a,b;
	printf("Enter an integer and it's power: ");
	scanf("%d %d",&a,&b);
	printf("%d to the power of %d is %d\n",a,b,power(a,b));
}

int power(int x,int y)
{
	return(y==1?x:x*power(x,y-1));
}
