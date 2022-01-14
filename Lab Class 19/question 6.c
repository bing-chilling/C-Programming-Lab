//Write a program to add elements present in every row of a matrix and store it in an array using pointer.
#include<stdio.h>

void main()
{
	int a,b,i,j,sum;
	printf("Enter number of rows and columns of matrix respectively: ");
	scanf("%d %d",&a,&b);
	int m[a][b],arr[a], (*d)[b];
	d=m;
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
		{
			printf("Enter value of matrix element %d,%d: ",i,j);
			scanf("%d",&d[i][j]);
		}
	}
	for (i=0;i<a;i++)
	{
		for (j=arr[i]=0;j<b;j++)
			arr[i]+= d[i][j];
	}
	printf("The matrix comes out to be:\n");
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
			printf("%d ",d[i][j]);
		printf("\n");
	}
	printf("The sum of all elements of the coulums of each row are:\n");
	for (i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
		printf("\n");
	}
}
