//Accessing two dimensional array (number of rows are fixed but size of each column is variable) using arrays of pointer variable
#include<stdio.h>

void main()
{
	int i;
	char *arr[6], a[]= "Kashmir", b[]= "Rajasthan", c[]= "Bihar", d[]= "Odisha", e[]= "Assam", f[]= "Bengal";
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	arr[3]=d;
	arr[4]=e;
	arr[5]=f;
	for (i=0;i<6;i++)
		printf("%s\n",arr[i]);
}
