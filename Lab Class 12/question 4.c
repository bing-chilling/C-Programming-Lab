/*Display different types of pattern on the screen
    1        1
   222      222
  33333    33333
 4444444  4444444
555555555555555555
 4444444  4444444
  33333    33333
   222      222
    1        1
*/
#include<stdio.h>
int main()
{
	int i,j,k,n=5;
	for (i=0,k=1;i<n;i++,k++)
		{
		for (j=0;j<n-1-i;j++)
			printf(" ");
		for (j=0;j<i*2+1;j++)
			printf("%d",k);
		for (j=0;j<n-1-i;j++)
			printf("  ");
		for (j=0;j<i*2+1;j++)
			printf("%d",k);
		printf("\n");
		}
	n=4;
	for (i=0,k=4;i<n;i++,k--)
		{
		for (j=0;j<i+1;j++)
			printf(" ");
		for (j=0;j<2*(n-i)-1;j++)
			printf("%d",k);
		for (j=0;j<i+1;j++)
			printf("  ");
		for (j=0;j<2*(n-i)-1;j++)
			printf("%d",k);
		printf("\n");
		}
	printf("\n");
	return 0;
}
