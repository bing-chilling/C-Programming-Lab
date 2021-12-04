//Write a function to convert lower case to upper case character
#include<stdio.h>

void convert(int n)
{
	printf("Capital character of %c is %c\n",n,n-32);
	
}

int main()
{
	char a;
	printf("Enter the lower case letter you want to have converted: ");
	scanf("%c",&a);
	convert(a);
	
	return 0;
}
