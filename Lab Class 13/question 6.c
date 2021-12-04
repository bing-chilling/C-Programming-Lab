//WAP to find the factorial value of any number entered through the keyboard.
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number you want to find factorial of: ");
	scanf("%d",&n);
	for(i=1,j=1;i<n;i++)
		j=j*i;
	printf("%d is the factorial\n",n*j);
	
	return 0;
}
