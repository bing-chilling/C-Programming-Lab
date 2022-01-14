//Find sum of first n elements of two arrays, return 0 (equal sum) 1(1st array sum is larger), or 2(2nd array sum is larger)
#include<stdio.h>

int sum(int *a, int *b, int c)
{
	int i,a1,a2;
	for (i=a1=a2=0;i<c;i++)
	{
		a1+=a[i];
		a2+=b[i];
	}
	return (a1==a2?0: (a1<a2?2:1) );
}

void main()
{
	int a,b,i,c,d;
	printf("Enter number of elements to add into array 1 and 2 respectively: ");
	scanf("%d %d",&a,&b);
	int arr1[a],arr2[b];
	printf("For array 1: \n");
	for (i=0;i<a;i++)
	{
		printf("Enter value of element %d: ",i);
		scanf("%d",&arr1[i]);
	}
	printf("For array 2: \n");
	for (i=0;i<b;i++)
	{
		printf("Enter value of element %d: ",i);
		scanf("%d",&arr2[i]);
	}
	printf("Enter number of first n elements to be added: ");
	scanf("%d",&c);
	d= sum(arr1,arr2,c);
	if (!d)
		printf("The sum of the first %d elements of the arrays are equal\n",c);
	else if (d==1)
		printf("The sum of the first %d elements of array1 is greater than array2\n",c);
	else
		printf("The sum of the first %d elements of array2 is greater than array1\n",c);
}
