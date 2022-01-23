#include <stdio.h>

void main()
{
	FILE *f;
	char c;
	f= fopen("input.in","r");
	while ((c=fgetc(f))!=EOF)
		printf("%c ",c);
	printf("\n");
	fclose(f);
}
