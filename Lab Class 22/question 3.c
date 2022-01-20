//Q.3) Write a program in 'C' to allocate and assign dynamically 2-D array ([n][5]), where column size is fixed to 5 to a pointer and find sum of all elements. 
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, j, a, (*p)[5], sum;
	printf("Enter number of rows of matrix: ");
	scanf("%d",&a);
	p= (int(*)[5])malloc(a*5*sizeof(int));
	printf("For sum 1:\n");
	for (i=sum=0;i<a;i++)
		for(j=0;j<5;j++)
		{
			printf("Enter element number %d,%d: ",i,j);
			scanf("%d",*(p+i)+j);
			sum+= *(*(p+i)+j);
		}
	printf("Sum of all elements of matrix= %d\n",sum);
	free(p);
}
