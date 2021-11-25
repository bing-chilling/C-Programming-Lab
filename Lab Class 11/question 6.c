//Wtite a program in 'C' to calculate the following sum series and display the result: S=1/2+ 1/3+ ...1/n
#include<stdio.h>
int main()
{
	int i,n;
	float sum;
	printf("Enter the number of terms present in sum: ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
		sum+= 1/(float)i;
	printf("sum= %f\n",sum);
	
	return 0;
}
