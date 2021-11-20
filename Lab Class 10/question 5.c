/*Enter score of 10 cricket players and count number of players scored century. Discard the -ve score if you enter by mistake.*/
#include<stdio.h>
int main()
{
	int num=1,score,cen=0;
	start:
	printf("Enter score of player number %d :",num);
	scanf("%d",&score);
	if ((100<=score)&&(score<200))
		{
		cen+=score/100;
		num++;
		}
	else if (score<0)
		printf("invalid\n");
	else if (200<=score)
		{
		cen++;
		num++;
		}
	else
		num++;
	if (num<11) goto start;
	printf("Total players who scord century= %d\n",cen);
	return 0;
}
