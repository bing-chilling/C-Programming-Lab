#include <stdio.h>

void main()
{
	FILE *f;
	int arr[20], i, sum;
	f= fopen("input.in","r");
	for (i=sum=0;i<10;i++)
	{
		fscanf(f,"%d",&arr[i]);
		printf("%d ",arr[i]);
		sum+= arr[i];
	}
	printf("\nSum of the above array: %d\n",sum);
	fclose(f);
}
