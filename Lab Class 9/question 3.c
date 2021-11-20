/*WAP to display whether th wheatstone bridge is balanced or not, if not, find out value of the variable resistance to balance the bridge*/
#include<stdio.h>
int main()
{
	float r1,r2,r3,r4;
	printf("Enter value of Resistor 1: ");
	scanf("%f",&r1);
	printf("Enter value of Resistor 2: ");
	scanf("%f",&r2);
	printf("Enter value of Resistor 3: ");
	scanf("%f",&r3);
	printf("Enter value of Resistor 4: ");
	scanf("%f",&r4);
	
	if (r1*r3==r2*r4)
		printf("The given resistors form a wheatstone bridge!\n");
	else
		{
		printf("The given resistors do not form a wheatstone bridge...\n");
		r1=r2*r4/r3;
		printf("Choose %f as Resistor 1 to balance the wheatstone bridge\n",r1);
		}
	return 0;
}
