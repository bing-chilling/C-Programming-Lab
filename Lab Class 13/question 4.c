//WAP to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked abouve 40 hours. Assume that employees do not work for fractional pert of an hour
#include<stdio.h>
int main()
{
	int hours,pay;
	printf("Enter number of hours worked: ");
	scanf("%d",&hours);
	if (hours<=40)
		printf("No extra pay available\n");
	else
		{
		pay= (hours-40)*12;
		printf("You will be paid %d Rs.\n",pay);
		}
	
	return 0;
}
