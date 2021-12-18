//Q.5) Write a program in 'C' to search whether an item present in the given array or not. If present, then display the position.
#include <stdio.h>

void main()
{
	int a,arr[20],i,n,flag=1;
	printf("Enter number of elements you want to add to array: ");
	scanf("%d", &a);
	for (i=0;i<a;i++)
		{
		printf("Enter element number %d array: ",i+1);
		scanf("%d", &arr[i]);
		}
	printf("Enter the integer you want to search for in array: ");
	scanf("%d",&n);
	for (i=0;i<a;i++)
		{
		if (n==arr[i])
			{
			printf("Item %d is present in array at position %d\n",n,i);
			flag=0;
			break;
			}
		}
	if (flag)
		printf("Item not present in array\n");
}
