//Q.6) Write a Program in 'C' to concatenate two strings i.e. concatenating string s2 to string s1. 
#include<stdio.h>

void main()
{
	char a1[50],a2[50];
	int i=0,j=0;
	printf("Enter a string: ");
	scanf("%s",a1);
	getchar();
	printf("Enter a string to be concatenated: ");
	scanf("%s",a2);
	while(a1[++j]);
	a1[j++]= ' ';
	for (i=0;a2[i];i++)
		a1[i+j]=a2[i];
	puts(a1);
}
