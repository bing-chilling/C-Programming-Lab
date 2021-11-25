//WAP in c to input 10 numbers and find the number of odd numbers and their sum.
#include<stdio.h>
int main()
{
	int a,i,x=0,sum=0;
	for(i=1;i<11;i++)
		{
		printf("Enter any integer: ");
		scanf("%d",&a);
		if (a%2!=0)
			{
			x+=1;
			sum+=a;
			}
		}
    	printf("%d %d\n",x,sum);
	
	return 0;
}
