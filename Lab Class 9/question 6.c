/*Given 3 points in 2-D, display whether they form a triangle or not.*/
#include<stdio.h>
int main()
{
	float x1,x2,x3,y1,y2,y3,m1,m2,m3;
	printf("Enter x and y values of 1st point: ");
	scanf("%f %f",&x1,&y1);
	printf("Enter x and y values of 2nd point: ");
	scanf("%f %f",&x2,&y2);
	printf("Enter x and y values of 3rd point: ");
	scanf("%f %f",&x3,&y3);
	if (((y2-y1)*(x1-x3)==(y1-y3)*(x2-x1))||((y2-y1)*(x3-x2)==(x2-x1)*(y3-y2))||((y1-y3)*(x3-x2)==(y3-y2)*(x1-x3)))
		printf("These points do not form a triangle\n");
	else
		printf("These points form a triangle\n");
		
	return 0;
}
