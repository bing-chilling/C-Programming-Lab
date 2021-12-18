//Add two matrix of size 4x4 and 4x4
#include<stdio.h>

void main()
{
	int i,j,n,m;
	printf("Enter number of rows and columns of matrix respectively: ");
	scanf("%d %d",&n,&m);
	int arr1[n][m], arr2[n][m], arr3[n][m];
	printf("\nEnter values for matrix 1:\n");
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			{
			printf("Enter element %d,%d of matrix:",i+1,j+1);
			scanf("%d",&arr1[i][j]);
			}
	printf("\nEnter values for matrix 2:\n");
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			{
			printf("Enter element %d,%d of matrix:",i+1,j+1);
			scanf("%d",&arr2[i][j]);
			}
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			arr3[i][j]= arr1[i][j] + arr2[i][j];
	printf("\nMatrix 1:\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr1[i][j]);
		printf("\n");
		}
	printf("\nMatrix 2:\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr2[i][j]);
		printf("\n");
		}
	printf("\nMatrix 3:\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr3[i][j]);
		printf("\n");
		}
}
