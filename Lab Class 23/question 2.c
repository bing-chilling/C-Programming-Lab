#include <stdio.h>

struct a
{
	int i;
	char c[2];
};

struct b
{
	int j;
	char d[2];
};

union z
{
	struct a key;
	struct b data;
};

void main()
{
	union z abc;
	abc.key.i= 999;
	printf("abc.key.i= %d\n",abc.key.i);
	abc.data.d[0]= 90;
	printf("\nabc.key.i= %d\n",abc.key.i);
	printf("abc.data.d[0]= %d\n",abc.data.d[0]);
	abc.key.c[0]= 50;
	printf("\nabc.key.c[0]= %d\n",abc.key.c[0]);
	printf("abc.key.i= %d\n",abc.key.i);
	printf("abc.data.d[0]= %d\n",abc.data.d[0]);
	abc.data.j= 100;
	printf("\nabc.data.j= %d\n",abc.data.j);
	printf("abc.key.c[0]= %d\n",abc.key.c[0]);
	printf("abc.key.i= %d\n",abc.key.i);
	printf("abc.data.d[0]= %d\n",abc.data.d[0]);
}

