//Q.1) Write a program in 'C' to create a structure Book having data members as name, price, and pages. Now enter the details of two books with quantity and calculate the total price, then display the details of two books with quantity and total price.
#include<stdio.h>

struct book
{
	char name[50];
	float price;
	unsigned int pages;
};

void main()
{
	int i,quan[2];
	struct book lib[2],*ptr;
	for (i=0;i<2;i++)
	{
		printf("Enter name, price and pages of book%d: ",i);
		scanf("%s %f %d",lib[i].name, &lib[i].price, &lib[i].pages);
	}
	ptr= lib;
	for (i=0;i<2;i++)
	{
		printf("Enter quantity of %s: ",ptr[i].name);
		scanf("%d",&quan[i]);
	}
	for (i=0;i<2;i++)
		printf("The quantity of %s is %d, bringing total price to: %f\n",ptr[i].name,quan[i],quan[i]*(ptr[i].price));
}
