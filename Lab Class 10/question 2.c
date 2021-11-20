/*Declaring grade of a student: First(>59),Second(>49),Third(>39),Fail(<40) in subjects phy,chem,math,eng,bio*/
#include<stdio.h>
int main()
{
	int p,c,m,e,b,total;
	printf("Enter marks obtained (out of 100) in phy, chem, math, eng, and bio: ");
	scanf("%d %d %d %d %d",&p,&c,&m,&e,&b);
	total= (int)(p+c+m+e+b+4.9)/5;
	if (59<total)
		printf("You have placed first\n");
	else if ((total<=59)&&(49<total))
		printf("You have placed second\n");
	else if ((total<=49)&&(40<=total))
		printf("You have placed third\n");
	else
		printf("You have failed\n");
	
	return 0;
}		
