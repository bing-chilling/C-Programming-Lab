//Q.4) Write a program in 'C' to allocate n elements dynamically to a pointer variable, assign data, then find the largest element and store it in the 0th position.
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, li=0, a, *p, comp, temp;
	printf("Enter number of elements you want to add to the array: ");
	scanf("%d",&a);
	p= (int*)malloc(a*sizeof(int));
	for (i=0;i<a;i++)
	{
		printf("Enter element number %d: ",i);
		scanf("%d",p+i);
	}
	comp= *p;
	for (i=1;i<a;i++)
	{
		if (comp<*(p+i))
		{
			comp=*(p+i);
			li=i;
		}
	}
	temp= *p;
	*p= comp;
	*(p+li)= temp;
	printf("The array comes out to be:\n");
	for (i=0;i<a;i++)
		printf("%d ",*(p+i));
	printf("\n");
	free(p);
}
