/*WAP to print KIIT student if you are in class 1 to 12, else print KIIT University Student*/
#include<stdio.h>
int main()
{
	int class;
	printf("Enter you class: ");
	scanf("%d", &class);
	if (1<class<12)
		printf("KIIT Student\n");
	else
		printf("KIIT University Student\n");
		
	return 0;
}
