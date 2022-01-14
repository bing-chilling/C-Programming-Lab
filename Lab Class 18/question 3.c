//Q.3) Write a Program in 'C' to check the given number is Armstrong number or not using pointer. 
#include<stdio.h>

void main()
{
	int a,i,*b,c,d,e=0,f,count1,count2;
	printf("Enter number to be checked: ");
	scanf("%d",&a);
	b=&a;
	c=a;
	for (i=a,count1=0;0<i;i=i/10)
		count1++;
	while (0<*b)
	{
		f= *b%10;
		for (d=1,count2=count1;0<count2;count2--)
			d= d*f;
		e+= d;
		*b= *b/10;
	}
	if (e==c)
		printf("The number %d is an armstrong number\n",c);
	else
		printf("The number %d is not an armstrong number\n",c);
}
