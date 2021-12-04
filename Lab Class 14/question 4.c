//Write a program in 'C' to find out sum of two float numbers using user-defined functin.
#include<stdio.h>

void sum(float a, float b)
{
	printf("The sum of the given decimals is: %f\n",a+b);
}

int main()
{
	float a,b,c;
	printf("Enter the decimals you want to have summed: ");
	scanf("%f %f",&a,&b);
	sum(a,b);
	
	return 0;
}
