/*WAP to give 60 mark grace if age is below 50 else give 40 marks grace*/
#include<stdio.h>
int main()
{
	int marks=40,a;
	printf("Enter your age: ");
	scanf("%d", &a);
	if (a<50)
		{
		marks+=20;
		}
	printf("Your obtained marks are: %d\n",marks);
	
	return 0;
}
