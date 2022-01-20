//Q.1) Write a program in 'C' to demonstrate all the storage class. 
#include<stdio.h>

int i=55;
void fn1()
{
	auto int i=1;
	printf("%d\n",i);
	i++;
}

void fn2()
{
	int i=5;
	printf("%d\n",i);
	i++;
}

void fn3()
{
	register int i=9;
	printf("%d\n",i);
	i++;
}

void fn4()
{
	printf("%d\n",i);
}

void fn5()
{
	static int i=99;
	printf("%d\n",i);
	i++;
}

void main()
{
	printf("%d\n",i);
	i++;
	fn4();
	int i=0;
	printf("%d\n",i);
	fn3();
	fn3();
	fn2();
	fn2();
	fn1();
	fn1();
	fn5();
	fn5();
}
