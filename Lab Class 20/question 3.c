//Q.3) Write a Program in 'C' to copy a string to another string i.e. source to destination string. 
#include<stdio.h>

void main()
{
	char a1[50],a2[50];
	int i;
	printf("Enter a string: ");
	scanf("%s",a1);
	for (i=0;a1[i];i++)
		a2[i]=a1[i];
	printf("The second string comes out to be: %s\n",a2);
}
