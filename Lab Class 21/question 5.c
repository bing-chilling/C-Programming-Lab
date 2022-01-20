//Q.5) Write a program in 'C' to create a structure product having data members name, company_name, price. Now enter the details of product within main() and display the details of product using two function where 1st function takes individual members and 2nd function takes entire structure.
#include<stdio.h>

struct product
{
	char name[30], company[30];
	float price;
};

void indiv(char *n, char *c, float *p,int i)
{
	printf("The name, company and price of the product%d are:\n%s, %s, %f\n",i,n,c,*p);
}

void entire(struct product a, int i)
{
	printf("The name, company and price of the product%d are:\n%s, %s, %f\n",i,a.name,a.company,a.price);
}

void main()
{
	int a,i;
	printf("Enter number of products to be billed: ");
	scanf("%d",&a);
	struct product item[a];
	for (i=0;i<a;i++)
	{
		printf("Enter name, company and price of the product%d:\n",i);
		scanf("%s %s %f",item[i].name, item[i].company, &item[i].price);
	}
	for (i=0;i<a;i++)
		indiv(item[i].name, item[i].company, &item[i].price,i);
	for (i=0;i<a;i++)
		entire(item[i],i);
}
