//Program to find out transpose of a matrix of size 4x4
#include<stdio.h>

void main()
{
	int i,j,n,t;
	printf("Enter number of rows and columns of square matrix: ");
	scanf("%d",&n);
	int m=n,arr[n][m];
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			{
			printf("Enter element %d,%d of matrix:",i+1,j+1);
			scanf("%d",&arr[i][j]);
			}
		}
	printf("\nThe matrix comes out to be:\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
		}
	for (i=0;i<(n-1);i++)
		for (j=(i+1);j<m;j++)
			{
			t=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=t;
			}
	printf("\nThe transpose of the matrix comes out to be:\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
		}
}
