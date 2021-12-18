//Q.8) Write a program in 'C' to print all the elements of the given array of size 'N', which are 3-digits even integers.
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
		if ( (x%2==0) && (99<x) && (x<1000) )
			printf("3 digit even number %d in position %d\n",x,i);
		}
}
