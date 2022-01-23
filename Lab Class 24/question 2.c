#include <stdio.h>

void main()
{
	FILE *f;
	int i, arr[10]= {50, 90, 0, 20, 80, 44, 88, 45, 66, 27};
	f= fopen("output2.out","w");
	printf("Array printed into file:\n");
	for (i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
		fprintf(f,"%d",arr[i]);
	}
	printf("\n");
	fclose(f);
}
