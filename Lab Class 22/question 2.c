//Q.2) Write a program in 'C' to allocate n elements dynamically to a pointer variable, assign data and find sum of all n elements using pointer variable. 
#include<stdio.h>
#include<stdlib.h>

int calsum(int a)
{
	int i,sum,*p;
	p= (int*)calloc(a, sizeof(int));
	printf("For sum 2:\n");
	for (i=sum=0;i<a;i++)
        {       
                printf("Enter element number %d: ",i);
                scanf("%d",p+i);
                sum+= *(p+i);
        }
	free(p);
	return sum;
}

void main()
{
	int i, a, *p, sum;
	printf("Enter number of elements you want to sum up: ");
	scanf("%d",&a);
	p= (int*)malloc(a*sizeof(int));
	printf("For sum 1:\n");
	for (i=sum=0;i<a;i++)
	{
		printf("Enter element number %d: ",i);
		scanf("%d",p+i);
		sum+= *(p+i);
	}
	printf("Sum1= %d\n",sum);
	printf("Sum2= %d\n",calsum(a));
	free(p);
}
