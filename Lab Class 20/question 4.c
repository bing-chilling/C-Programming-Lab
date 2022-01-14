//Q.4) Write a Program in 'C' to find length of a string. 
#include<stdio.h>

void main()
{
	char a[100];
	int i=0;
	printf("Enter a word: ");
	scanf("%s",a);
	while(a[++i]);
	printf("Length of the word is: %d\n",i);
}
