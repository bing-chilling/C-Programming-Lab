//Q.1) Write a program in 'C' to find out area and circumference of a circle using user-defined function. (With Function Prototype) 
#include<stdio.h>

float area(),circ();

void main()
{
	int a;
	printf("Enter the radius of the circle: ");
	scanf("%d",&a);
	printf("The area of the circle with radius %d and circumference %f is %f\n",a,circ(a),area(a));
}

float area(int a)
{
	float ar;
	ar= (3.14)*a*a;
	return(ar);
}

float circ(int a)
{
	return (2*(3.14)*a);
}
