/*Display the pattern in the screen:
    $        $
   $$$      $$$
  $$$$$    $$$$$
 $$$$$$$  $$$$$$$
$$$$$$$$$$$$$$$$$$
*/
#include<stdio.h>
int main()
{
	int i,n=5,j;
	for (i=0;i<n;i++)
		{
		for(j=0;j<(n-1)-i;j++)
			printf(" ");
		for(j=0;j<1+2*i;j++)
			printf("$");
		for(j=0;j<(n-1)-i;j++)
			printf("  ");
		for(j=0;j<1+2*i;j++)
			printf("$");
		printf("\n");
		}
	printf("\n");
	
	return 0;
}
