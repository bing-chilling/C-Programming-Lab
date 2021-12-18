//Q.7) Write a program in 'C' to count and print all the even elements and odd elements separately of the given array with size 'N'.
#include <stdio.h>

void main()
{
	int a,arr[20],i,x,count;
	printf("Enter number of elements you want to add to array: ");
	scanf("%d", &a);
	for (i=0;i<a;i++)
		{
		printf("Enter element number %d array: ",i+1);
		scanf("%d", &arr[i]);
		}
	for (i=0,count=0;i<a;i++)
		{
		x=arr[i];
		if (x%2==0)
			{
			printf("Element %d of position %d is even.\n",x,i);
			count++;
			}
		}
	printf("Total number of even elements: %d\n",count);
	for (i=0,count=0;i<a;i++)
		{
		x=arr[i];
		if (x%2!=0)
			{
			printf("Element %d of position %d is even.\n",x,i);
			count++;
			}
		}
	printf("Total number of odd elements: %d\n",count);
}
