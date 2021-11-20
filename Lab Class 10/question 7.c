/*WAP to input a 3-digit number and check whether it is palindrome number or not.(Without using loop)*/
#include<stdio.h>
int main()
{
	int a,b,c,d,digit;
	printf("Enter a three digit integer: ");
	scanf("%d",&digit);
	a= digit/100;
	b= (digit - a*100)/10;
	c= digit - a*100 - b*10;
	if (a==c)
		printf("The digit %d is a palindrome!\n",digit);
	else
		printf("The digit %d is not a palindrome..\n",digit);
	return 0;
}
