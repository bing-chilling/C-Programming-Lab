//WAP to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.
#include<stdio.h>
int main()
{
	int a=0;
	while (a<255)
		{
		printf("%c %d\n",a,a);
		a++;
		}
		
	return 0;
}
