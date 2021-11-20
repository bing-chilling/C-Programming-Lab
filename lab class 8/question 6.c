#include<stdio.h>
#include<math.h>
#define g 9.8
#define pi 3.14
int main()
{
	float t,l;
	l= 10;
	t=2*pi*(sqrt(l/g));
	printf("The value of time period of pendulum of length %f is %f\n",l,t);
	l+= 10;
	t=2*pi*(sqrt(l/g));
	printf("The value of time period of pendulum of length %f is %f\n",l,t);
	l+= 10;
	t=2*pi*(sqrt(l/g));
	printf("The value of time period of pendulum of length %f is %f\n",l,t);
	l+= 10;
	t=2*pi*(sqrt(l/g));
	printf("The value of time period of pendulum of length %f is %f\n",l,t);
	l+= 10;
	t=2*pi*(sqrt(l/g));
	printf("The value of time period of pendulum of length %f is %f\n",l,t);
	
	return 0;
}
