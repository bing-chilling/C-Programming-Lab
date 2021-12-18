//Q.6) Write a program in 'C' to input N integers of an array and find the largest and smallest elements stored in this array.
#include <stdio.h>

void main()
{
	int a,arr[20],i,x,y;
	printf("Enter number of elements you want to add to array: ");
	scanf("%d", &a);
	for (i=0;i<a;i++)
		{
		printf("Enter element number %d array: ",i+1);
		scanf("%d", &arr[i]);
		}
	for (i=0,y=0;i<a;i++)
		{
		x=arr[i];
		if (y<x)
			y=x;
		}
	printf("The greatest integer in array is: %d\n",y);
	for (i=0,y=arr[0];i<a;i++)
		{
		x=arr[i];
		if (x<y)
			y=x;
		}
	printf("The smallest integer in array is: %d\n",y);
}
