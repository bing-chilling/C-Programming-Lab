//Q.3) Write a program in 'C' to create a structure Book having data members as name, price, and pages. Now enter the details of 'n' books and display them using pointer to array of structure. 
#include<stdio.h>

struct book
{
	char name[50];
	float price;
	unsigned int pages;
};

void main()
{
	int i,a;
	printf("Enter number of books to be registered: ");
	scanf("%d",&a);
	struct book lib[a],*ptr;
	for (i=0;i<a;i++)
	{
		printf("Enter name, price and pages of book%d: ",i);
		scanf("%s %f %d",lib[i].name, &lib[i].price, &lib[i].pages);
	}
	ptr= lib;
	for (i=0;i<a;i++)
		printf("The name, price and pages respectively of book%d :\n%s, %f,  %d\n",i,ptr[i].name,ptr[i].price,ptr[i].pages);
}
