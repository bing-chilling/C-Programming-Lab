/*WAP to find out the values of y for 5 values of x in the equation y=x2+3*/
#include <stdio.h>
int main()
{
    int y,x;
    x=1;
    y=x*x + 3;
    printf("Value of y when x is %d comes out to be: %d",x,y);
    x=6;
    y=x*x + 3;
    printf("\nValue of y when x is %d comes out to be: %d",x,y);
    x++;
    y=x*x + 3;
    printf("\nValue of y when x is %d comes out to be: %d",x,y);
    x++;
    y=x*x + 3;
    printf("\nValue of y when x is %d comes out to be: %d",x,y);
    x++;
    y=x*x + 3;
    printf("\nValue of y when x is %d comes out to be: %d",x,y);
    return 0;
    }
