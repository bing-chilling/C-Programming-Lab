/*WAP to print the following pattern for n rows. Ex. for n=5 rows
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
	int i,j,k=0,n,f;
	printf("Enter the number of rows to be printed: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
		if (i%2!=0)
			{
			for (f=i+1;0<f;f--)
				printf("%d",f);
			}
		else
			{
			for (f=1;f<i+2;f++)
				printf("%d",f);
			}
		printf("\n");
		}
	printf("\n");
	
	return 0;
}
