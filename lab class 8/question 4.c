#include<stdio.h>
int main()
{
	int k;
	float x1, y1, x2, y2, s1, a1, a2, b1, b2, s2;
	printf("Enter x and y values of 1st point of line 1: ");
	scanf("%f %f",&x1,&y1);
	printf("\nEnter x and y values of 2nd point of line 1: ");
	scanf("%f %f",&x2,&y2);
	s1= (y2-y1)/(x2-x1);
	printf("Enter x and y values of 1st point of line 2: ");
	scanf("%f %f",&a1,&b1);
	printf("\nEnter x and y values of 2nd point of line 2: ");
	scanf("%f %f",&a2,&b2);
	s2= (y2-y1)/(x2-x1);
	k= (s1==s2);
	printf("If the given 2 lines are parallel, output will be 1, else, 0: %d\n",k);
	
	return 0;
}
