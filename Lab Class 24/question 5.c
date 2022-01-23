#include <stdio.h>

void main()
{
	FILE *p, *in;
	char c;
	p= fopen("q4file.c","r");
	in= fopen("q5copy.c","w");
	while ((c=fgetc(p))!=EOF)
			fprintf(in,"%c",c);
	fclose(p);
	fclose(in);
}
