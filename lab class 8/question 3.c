/*Write a programme to display 1 if two lines in 2-D are perpendicular to each other else any other integer value.*/
#include<stdio.h>
int main()
{
	float x1, y1, x2, y2, s1, a1, a2, b1, b2, s2, k;
	printf("Enter x and y values of 1st point of line 1: ");
	scanf("%f %f",&x1,&y1);
	printf("\nEnter x and y values of 2nd point of line 1: ");
	scanf("%f %f",&x2,&y2);
	s1= (y2-y1)/(x2-x1);
	printf("Enter x and y values of 1st point of line 2: ");
	scanf("%f %f",&a1,&b1);
	printf("\nEnter x and y values of 2nd point of line 2: ");
	scanf("%f %f",&a2,&b2);
	s2= (b2-b1)/(a2-a1);
	k= s1*s2*(-1);
	printf("If the given 2 lines are perpendicular, output will be 1, else, any other integer: %f\n",k);
	
	return 0;
}
