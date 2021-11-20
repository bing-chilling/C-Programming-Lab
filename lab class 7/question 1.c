#include<stdio.h>
int main()
{
    float x1, y1, x2, y2,e;
    printf("Enter x and y values of 1st point: ");
    scanf("%f %f",&x1,&y1);
    printf("\nEnter x and y values of 2nd point: ");
    scanf("%f %f",&x2,&y2);
    e= (y2-y1)/(x2-x1);
    printf("The slope of the line passing through point 1 and point 2 is: %f",e);
    return 0;
    }
