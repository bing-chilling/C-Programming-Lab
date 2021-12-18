//WAP to copy the contents of one array into another in the reverse order
#include<stdio.h>

void main()
{
	int i,j,n,m;
	printf("Enter number of elements of array: ");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	for (i=0;i<n;i++)
		{
		printf("Enter element number %d of array: ",i+1);
		scanf("%d", &arr1[i]);
		}
	for (i=0;0<=j;i++)
		{
		j=n-i-1;
		arr2[i]=arr1[j];
		}
	printf("\nArray 1:\n");
	for (i=0;i<n;i++)
		printf("%d ",arr1[i]);
	printf("\nArray 2:\n");
	for (i=0;i<n;i++)
		printf("%d ",arr2[i]);
	printf("\n");
}
