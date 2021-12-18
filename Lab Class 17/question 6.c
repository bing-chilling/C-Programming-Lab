//WAP to find if a square matrix is symmetric
#include<stdio.h>

void main()
{
	int i,j,n,m,flag=1;
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
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			if (arr[i][j]!=arr[j][i])
				{
				flag=0;
				break;
				}
	printf("\n The matrix comes out to be:\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<m;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
		}
	if (flag)
		printf("This matrix is symmetric\n");
	else
		printf("This matrix is not symmetric\n");
}
		
