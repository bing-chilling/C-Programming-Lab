/*Write a program in ‘C’ to generate the pascal triangle pyramid of numbers for a given number.
Ex. for number 4
	   1
          1  1
        1  2  1
      1  3  3  1
    1  4  6  4  1
   */
#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,x,y,z,constant=1,binomial;
	printf("Upto what number do you want the pascal pyramid to be printed?: ");
	scanf("%d",&m);
	n=m+1;
	for (i=1;i<=n;i++)
		{
		for (j=0;j<n-i;j++)
			printf(" ");
		printf("%d ",constant);
		if (i==1)
			goto start;
		for (x=1,k=i;0<k;k--)
			x=x*k;
		z=x;
		for (y=1,l=1;l<i;l++)
			{
			y=y*l;
			z=z/(i-l);
			binomial= x/(y*z);
			printf("%3d ",binomial);
			}
		start:
		printf("\n");
		}

	return 0;
}
