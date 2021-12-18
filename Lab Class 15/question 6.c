//Q.6) Write a program in 'C' to a to the power b using recursive function. 
#include <stdio.h>

int power(int x,int y)
{
	return(y==1?x:x*power(x,y-1));
}

void main()
{
	int a,b;
	printf("Enter an integer and it's power: ");
	scanf("%d %d",&a,&b);
	printf("%d to the power of %d is %d\n",a,b,power(a,b));
}
