//Write a program in 'C' to calculate the following sum series and display the result: S=1/n+ 1/n-2+ 1/n-4....+1/0
#include<stdio.h>
int main()
{
	int i,n;
	float sum;
	printf("Enter the number of terms present in sum: ");
	scanf("%d",&n);
	for (i=2;i<n;i++)
		sum+= 1/(float)(n-i);
	printf("sum= %f\n",sum);
	
	return 0;
}
