//The X and Y coordinates of 10 different points are entered through the keyboard. WAP to find the distance of last point from the first point (sum of distance between consecutive points)
#include<stdio.h>
#include<math.h>

void main()
{
	int i,j,arr[10][2];
	float a=0.0;
	for (i=0;i<10;i++)
		{
		printf("Enter x,y coordinates of point %d: ",i+1);
		scanf("%d %d",&arr[i][0],&arr[i][1]);
		}
	for (i=0;i<9;i++)
			a+= sqrt( (((arr[i][0]-arr[i+1][0])*(arr[i][0]-arr[i+1][0])) + ((arr[i][1]-arr[i+1][1])*(arr[i][1]-arr[i+1][1]))));
	printf("\nSum of distance between consecutive points is: %f\n",a);
}	
