//Q.1) Write a function in 'C' to add elements present in every row of a matrix and store it in array using pointer. 
#include<stdio.h>

void sum(int (*p2)[5], int *p1);

void main()
{
	int arr[4][5],summation[4];
	sum(arr,summation);
}

void sum(int (*p2)[5], int *p1)
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
		for (j=temp=0;j<5;j++)
			temp+= *(*(p2+i)+j);
	*(p1+i)=temp;
	}
	printf("The matrix comes out to be:\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
			printf("%d ",*(*(p2+i)+j));
		printf("\n");
	}
	printf("Sum of all the elements of each row are:\n");
	for (i=0;i<4;i++)
	{
		printf("%d ",*(p1+i));
		printf("\n");
	}
}
