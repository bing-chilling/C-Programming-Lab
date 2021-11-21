/*WAP to find out velocity and distance covered by a stone after time (1,2,3,4,5 sec), if it is thrown with an initial velocity (u) from top of Eiffel tower.*/
#include <stdio.h>
#define g 9.8

int main()
{
    float u,s,t,v;
    printf("Enter initial speed: ");
    scanf("%f", &u);
    t=1.0;
    v= u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nAt time %f\n",t);
    printf("So, the final speed comes out to be: %f", v);
    printf("\nAnd, the distance covered comes out to be: %f", s);
    t=2.0;
    v= u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nAt time %f\n",t);
    printf("So, the final speed comes out to be: %f", v);
    printf("\nAnd, the distance covered comes out to be: %f", s);
    t=3.0;
    v= u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nAt time %f\n",t);
    printf("So, the final speed comes out to be: %f", v);
    printf("\nAnd, the distance covered comes out to be: %f", s);
    t=4.0;
    v= u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nAt time %f\n",t);
    printf("So, the final speed comes out to be: %f", v);
    printf("\nAnd, the distance covered comes out to be: %f", s);
    t=5.0;
    v= u + g*t;
    s= u*t + 0.5*g*t*t;
    printf("\nAt time %f\n",t);
    printf("So, the final speed comes out to be: %f", v);
    printf("\nAnd, the distance covered comes out to be: %f", s);

    return 0;
}

