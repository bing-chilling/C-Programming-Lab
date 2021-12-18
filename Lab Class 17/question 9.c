//WAP to pick up the largest number from any 5 row by 5 column matrix
#include<stdio.h>

void main()
{
	int i,j,n,m,a;
	printf("Enter number of rows and columns of matrix respectively: ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			{
			printf("Enter element %d,%d of matrix:",i+1,j+1);
			scanf("%d",&arr[i][j]);
			}
	a=arr[0][0];
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			if (a<arr[i][j])
				a=arr[i][j];
	printf("\nThe greatest element of the matrix is: %d\n",a);
}
