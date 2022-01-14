//Q.2) Write a function in 'C' to find the largest element of a 4*5 matrix and in the same function find the largest element of each raw and store it in array using pointer.
#include<stdio.h>

void sum(int (*p2)[5], int *p1);

void main()
{
	int arr[4][5], largest[4];
	sum(arr,largest);
}

void sum(int (*p2)[5],int *p1)
{
	int i,j,temp;
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
		{
			printf("Enter value of element %d,%d: ",i,j);
			scanf("%d",(*(p2+i)+j));
		}
	for (i=0;i<4;i++)
	{
		temp= *(*(p2+i)+0);
		for (j=0;j<5;j++)
			if (temp<*(*(p2+i)+j))
				temp=*(*(p2+i)+j);
		*(p1+i)=temp;
	}
	printf("The matrix comes out to be:\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
			printf("%d ",*(*(p2+i)+j));
		printf("\n");
	}
	printf("The largest elements of each row are:\n");
	for (i=0;i<4;i++)
	{
		printf("%d ",*(p1+i));
		printf("\n");
	}
}
