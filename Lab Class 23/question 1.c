#include <stdio.h>

union Data
{
	int i;
	float f;
	char str;
}d1,d2;

void main()
{
	union Data data;
	data.i= 30;
	printf("data.i= %d\n",data.i);
	data.f= 23.50;
	printf("\ndata.f= %f\n",data.f);
	printf("data.i= %d\n",data.i);
	data.str= 'a';
	printf("\ndata.str= %c and ascii value= %d\n",data.str,data.str);
	printf("data.f= %f\n",data.f);
	printf("data.i= %d\n",data.i);
}
