//Finding number of 'a' present in all names using arrays of pointer variable
#include<stdio.h>

void main()
{
	char *arr[6], a[]= "Kashmir", b[]= "Rajasthan", c[]= "Bihar", d[]= "Odisha", e[]= "Assam", f[]= "Bengal",i,count,j;
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	arr[3]=d;
	arr[4]=e;
	arr[5]=f;
	for (i=count=0;i<6;i++)
		for (j=0;arr[i][j];j++)
			count+= (arr[i][j]=='a');
	for (i=0;i<6;i++)
		printf("%s\n",arr[i]);
	printf("Number of 'a' present in the above array add upto: %d\n",count);
}
