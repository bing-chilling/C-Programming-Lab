/*Display different types of pattern on the screen
$        $        $
$$$      $$$      $$$
$$$$$    $$$$$    $$$$$
$$$$$$$  $$$$$$$  $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$  $$$$$$$  $$$$$$$
$$$$$    $$$$$    $$$$$
$$$      $$$      $$$
$        $        $
*/
#include<stdio.h>
int main()
{
	int i=0,n=5,j;
	for (i=0;i<n;i++)
		{
		for(j=0;j<1+2*i;j++)
			printf("$");
		for(j=0;j<(n-1)-i;j++)
			printf("  ");
		for(j=0;j<1+2*i;j++)
			printf("$");
		for(j=0;j<(n-1)-i;j++)
			printf("  ");
		for(j=0;j<1+2*i;j++)
			printf("$");
		printf("\n");
		}
	n=4;
	for (i=0;i<n;i++)
		{
		for(j=0;j<(n-i)*2-1;j++)
			printf("$");
		for(j=0;j<(i+1)*2;j++)
			printf(" ");
		for(j=0;j<(n-i)*2-1;j++)
			printf("$");
		for(j=0;j<(i+1)*2;j++)
			printf(" ");
		for(j=0;j<(n-i)*2-1;j++)
			printf("$");
		printf("\n");
		}
	printf("\n");
	
	return 0;
}
