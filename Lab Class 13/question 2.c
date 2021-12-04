//WAP to print all prime numbers from 1 to 300.
#include<stdio.h>
int main()
{
	int i,j,k,two=2,flag=1;
	printf("%d ",two);
	for (i=3;i<=300;i+=2)
		{
		for (j=2,flag=1;j<i;j++)
			{
			if (i%j==0)
				{
				flag=0;
				break;
				}
			}
		if (flag)
		printf("%d ",i);
		}
	printf("\n");
	
	return 0;
}			
