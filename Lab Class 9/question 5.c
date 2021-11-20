/*If basic salary is < Rs. 1500, then HRA=10% and DA=40% of basic salary, else HRA=Rs.500 and DA=50% of basic salary. Find his gross salary.*/
#include<stdio.h>
int main()
{
	float s,hra,da;
	printf("Enter amount of basic salary: ");
	scanf("%f",&s);
	if (s<1500)
		{
		hra= s*0.1;
		da= s*0.4;
		s+=hra+da;
		printf("The total salary comes out to be: %f\n",s);
		}
	else
		{
		hra= 500.0;
		da= s*0.5;
		s+=hra+da;
		printf("The total salary comes out to be: %f\n",s);
		}
	return 0;
}
