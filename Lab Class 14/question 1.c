//Write a function to display '=' n times on the screen (n is a formal parameter)
#include<stdio.h>
void equal(int n)
{
	int i;
	for (i=0;i<n;i++)
		printf("=");
	printf("\n");
}
int main()
{
	int a,b;
	start:
	printf("Enter number of '=' you want to have printed: ");
	scanf("%d",&a);
	equal(a);
	printf("Would you like to continue?(1:yes, 0:no)");
	scanf("%d",&b);
	if (b==1)
		goto start;
	
	return 0;
}
