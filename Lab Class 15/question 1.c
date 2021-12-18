//Write a function to find out the largest between n numbers and another function to count the number of leaders (A number is a leader if all previous number are smaller)
#include <stdio.h>
int leader (int n)
{
	int num,a,i,count=1;
	for (i=0;i<n;i++)
		{
		printf("Enter integer: ");
		scanf("%d",&a);
		if (num<a)
			{
			num=a;
			count++;
			}
		}
	return (count);
}

int find (int n)
{
	int a,i,num=n;
	for (i=0;i<n;i++)
		{
		printf("Enter integer: ");
		scanf("%d",&a);
		if (num<a)
			num=a;
		}
	return (num);
}

void main()
{
	int n;
	printf("Enter number of integers to be compared: ");
	scanf("%d",&n);
	printf("\nThe maximum comes out to be: %d",find(n));
	printf("\nThe number of leaders come out to be: %d\n",leader(n));	
}
