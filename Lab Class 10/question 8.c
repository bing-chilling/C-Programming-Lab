/*WAP to read an alphabet in any case and convert it into opposite case. */
#include<stdio.h>
int main()
{
	char a;
	printf("Enter an alphabet in any case:");
	scanf("%c",&a);
	if ((a>=97) && (a<=122))
		{
		a=a-32;
		printf("Character in upper case: %c\n",a);
		}
	else if ((a>=65) && (a<=90))
		{
		a=a+32;
		printf("Character in lower case: %c\n",a);
		}
	return 0;
}
