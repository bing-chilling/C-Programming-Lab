//Q.5) Write a Program in 'C' to find frequency of a character in a string. 
#include<stdio.h>

void main()
{
	char a1[50],a;
	int i,count,j;
	printf("Enter a string: ");
	scanf("%s",a1);
	getchar();
	printf("Enter the character you want to find the frequency of: ");
	scanf("%c",&a);
	for (i=count=0;a1[i];i++)
		if (a1[i]==a)
			count++;
	printf("Number of occurances of '%c' in '%s' is: %d\n",a,a1,count);
}
