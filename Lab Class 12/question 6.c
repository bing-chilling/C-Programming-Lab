/*WAP to print the following pattern for n rows. Ex. for n=6 rows
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int i,j,k=0,n;
	printf("Enter the number of rows to be printed: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
		if (i%2==0)
			{
			for (j=0;j<i+1;j++)
				{
				if (k==0)
					k=1;
				else
					k=0;
				printf("%d",k);
				}
			printf("\n");
			}
		else
			{
			for (j=0;j<i+1;j++)
				{
				if (k==1)
					k=0;
				else
					k=1;
				printf("%d",k);
				}
			printf("\n");
			}
		}
	printf("\n");
	
	return 0;
}
