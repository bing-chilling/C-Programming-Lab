/*Enter score of 11 cricekt players and find the average score*/
#include<stdio.h>
int main()
{
	int score,sum=0,num=1;
	start:
	printf("Enter score of player number %d = ",num);
	scanf("%d",&score);
	sum+=score;
	num++;
	if (num<12) goto start;
	else
		printf("The average score comes out to be = %f\n",(float)sum/11);
	return 0;
}	
