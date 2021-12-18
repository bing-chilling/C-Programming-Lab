//20 numbers are entered from the keyboard into an array. WAP to find out how many of them are positive, how many are negative, how many are even and how many are odd.
#include<stdio.h>

void main()
{
	int i,j,n,arr[20],neg,even,odd,pos;
	neg=even=odd=pos=0;
	for (i=0;i<20;i++)
		{
		printf("Enter element number %d of array: ",i+1);
		scanf("%d", &arr[i]);
		}
	for (i=0;i<20;i++)
		{
		if (arr[i]<0)
			neg++;
		else
			pos++;
		if (arr[i]%2==0)
			even++;
		else
			odd++;
		}
	printf("Number of negative elements in array: %d\n",neg);
	printf("Number of positive elements in array: %d\n",pos);
	printf("Number of even elements in array: %d\n",even);
	printf("Number of odd elements in array: %d\n",odd);
}
