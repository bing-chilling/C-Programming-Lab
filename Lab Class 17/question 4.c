//WAp to multiply a scalar (constant) to a matrix of size 3x4
#include<stdio.h>

void main()
{
	int i,j,n,m,a;
	printf("Enter number of rows and columns of matrix respectively: ");
	scanf("%d %d",&n,&m);
	printf("Enter scalar value to be multiplied to matrix: ");
	scanf("%d",&a);
	int arr[n][m];
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			{
			printf("Enter element %d,%d of matrix:",i+1,j+1);
			scanf("%d",&arr[i][j]);
			}
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			arr[i][j]*=a;
	printf("\nThe new matrix is: \n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
		}
}
