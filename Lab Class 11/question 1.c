//WAP to print 1 to 9 and 9 to 1 using single while statement
#include<stdio.h>
int main()
{
	int a=1;
	while (a<10)
	   	{
		printf("%d %d\n",a,10-a);
	    	a++;
	    	}
	
	return 0;
}
