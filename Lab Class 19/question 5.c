//Accessing two dimensional array (number of rows are variable but size of each column is fixed) using pointer variable
#include<stdio.h>

void main()
{
	int a,b,i,j;
	printf("Enter number of rows and columns of matrix respectively: ");
	scanf("%d %d",&a,&b);
	int m[a][b], (*d)[b];
	d=m;
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
		{
			printf("Enter value of matrix element %d,%d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for (i=0;i<a;i++)
	{
		for (j=0;j<b;j++)
			printf("%d ",d[i][j]);
		printf("\n");
	}
}
