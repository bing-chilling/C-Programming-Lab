//Program to read and display a 4x5 matrix in matrix form
#include<stdio.h>

void main()
{
	int i,j,n,m;
	printf("Enter number of rows and columns of matrix respectively: ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			{
			printf("Enter element %d,%d of matrix:",i+1,j+1);
			scanf("%d",&arr[i][j]);
			}
		}
	printf("\n The matrix comes out to be:\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
		}
}

