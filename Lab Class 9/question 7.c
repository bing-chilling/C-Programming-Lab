/*WAP to display whether a vehicle moves with constant velocity/acceleration/decceleration*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of acceleration: ");
	scanf("%d",&a);
	if (a==0)
		printf("The vehicle moves with constant velocity.\n");
	else if (a<0)
		printf("The vehicle is retarding.\n");
	else
		printf("The vehicle is accelerating.\n");
	
	return 0;
}
