//Q.7) Write a Program in 'C' to to compare two strings, if both strings are equal then return -1, if both are not equal then return the position where the first mismatch occurs.
#include<stdio.h>

int compare(char *p1, char *p2);

void main()
{
	char a1[50],a2[50];
	int i,b;
	printf("Enter a string: ");
	scanf("%s",a1);
	printf("Enter another string to be compared: ");
	scanf("%s",a2);
	b=compare(a1,a2);
	if (b<0)
		printf("The given strings are the same.\n");
	else if (0<b)
	{
		printf("The given strings are same till index %d:\n",b);
		for (i=0;i<b;i++)
			printf("%c",a1[i]);
		printf("\n");
	}
	else
		printf("The given string are not the same.\n");
}

int compare(char*p1, char *p2)
{
	int i,j=0,k=0,flag;
	while(p1[++k]);
	while(p2[++j]);
	if (k!=j)
	{
		for (i=0;p1[i]||p2[i];i++)
			if (p1[i]!=p2[i])
				return (i);
	}
	else
	{
		for (i=0,flag=-1;p1[i];i++)
			if (p1[i]!=p2[i])
				return (i);
		return (flag);
	}
}
