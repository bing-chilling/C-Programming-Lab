/*Display different types of pattern on the screen
AAAAAAAAAAAAAAAAAAAAA
AAAAAA AAAAAA AAAAAA
AAAAA  AAAAA  AAAAA
AAAA   AAAA   AAAA
AAA    AAA    AAA
AA     AA     AA
A      A      A
*/
#include<stdio.h>
int main()
{
	int i,n=7,j;
	for (i=0;i<n;i++)
		{
		for(j=0;j<(n-i);j++)
			printf("A");
		for(j=0;j<i;j++)
			printf(" ");
		for(j=0;j<(n-i);j++)
			printf("A");
		for(j=0;j<i;j++)
			printf(" ");
		for(j=0;j<(n-i);j++)
			printf("A");
		printf("\n");
		}
	printf("\n");
	
	return 0;
}
