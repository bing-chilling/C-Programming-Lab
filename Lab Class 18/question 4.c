//Q.4) Write a Program in 'C' to find out sum of all the elements of the given array using pointer variable. 
#include<stdio.h>

void main()
{
	int*b,i,a,c;
	printf("Enter number of elements to add to the array: ");
	scanf("%d",&a);
	int arr[a];
	for (i=0;i<a;i++)
	{
		printf("Enter element number %d: ",i);
		scanf("%d",&arr[i]);
	}
	b=arr;
	for (i=0,c=0;i<a;i++)
		c+=*(b+i);
	printf("The sum of all elements of the array is: %d\n",c);
}
