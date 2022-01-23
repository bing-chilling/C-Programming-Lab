#include <stdio.h>

void main()
{
	FILE *f;
	char c;
	int chars=0, space=0, tabs=0, nl= 0;
	f= fopen("q4file.c","r");
	while ((c=fgetc(f))!=EOF)
	{
		chars++;
		if (c== ' ')
			space++;
		if (c== '\t')
			tabs++;
		if (c== '\n')
			nl++;
	}
	fclose(f);
	printf("Number of characters= %d\n",chars);
	printf("Number of tabs= %d\n",tabs);
	printf("Number of spaces= %d\n",space);
	printf("Number of new lines= %d\n",nl);
}
