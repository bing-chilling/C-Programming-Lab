//Display time period of a simple pendulum for different values of lengths starting from 10 with an increment length of 10
#include<stdio.h>
#include<math.h>
#define g 9.8
#define pi 3.14
int main()
{
	int i,l;
	float t;
	for(i=0;i<10;l+=10)
		{
		t=2*pi*(sqrt(l/g));
		printf("The value of time period of pendulum of length %d is %f\n",l,t);
		i++;
		}
	
	return 0;
}
