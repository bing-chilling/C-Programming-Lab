//Q.5) Write a Program in 'C' to sort the elements of an array using pointer.
#include<stdio.h>

void main()
{
	int a,*b,c,d,i,j,start;
	printf("Enter number of elements to add to the array: ");
	scanf("%d",&a);
	int arr[a];
	b=arr;
	for (i=0;i<a;i++)
	{
		start:
		printf("Enter element number you want to add to: ");
		scanf("%d",&c);
		if (c<0||a<=c)
		{
			printf("Invalid! Index not in range\n");
			goto start;
		}
		printf("Enter element value: ");
		scanf("%d",(b+c));
	}
	printf("The array comes out to be:\n");
	for (i=0;i<a;i++)
		printf("%d, ",arr[i]);
	printf("\n");
	for (i=0;i<a;i++)
	{
		for (j=0;(j+i)<a;j++)
		{
			if (*(b+i)<*(b+j+i))
			{
				d=*(b+i);
				*(b+i)=*(b+i+j);
				*(b+i+j)=d;
			}
		}
	}
	printf("The array arranged in a descending order comes out to be:\n");
	for (i=0;i<a;i++)
		printf("%d, ",arr[i]);
	printf("\n");
}
