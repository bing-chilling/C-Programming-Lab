//Write a function to display a character ch, n times on the screen (n and ch are formal parameters)
#include<stdio.h>

void display(int n, char ch)
{
	int i;
	for (i=0;i<n;i++)
		printf("%c",ch);
	printf("\n");
}

int main()
{
	int a,b;
	char c;
	start:
	printf("Enter character you want to have printed and how many times: ");
	scanf("%c %d",&c,&a);
	display(a,c);
	printf("Would you like to continue?(1:yes, 0:no): ");
	scanf("%d",&b);
	if (b==1)
		goto start;
	
	return 0;
}
