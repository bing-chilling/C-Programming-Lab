/*WAP for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
-There are 21 matchsticks.
-The computer asks the player to pick 1,2,3 or 4 matchsticks.
-After the person picks, the computer does its picking.
-Whoever is forced to pick up the last matchstick looses the game.*/
#include<stdio.h>
int main()
{
	int matchsticks=21,i;
	start:
	printf("Pick how many matchsticks you want to pick (1 to 4): ");
	scanf("%d",&i);
	matchsticks-=i;
	printf("Total number of matchsticks: %d\n",matchsticks);
	
	if (1<matchsticks)
		{
		switch (i)
			{
			case 1:
			matchsticks-=4;
			printf("I have picked 4 matchsticks, bringing the total count down to: %d\n",matchsticks);
			break;
			case 2:
			matchsticks-=3;
			printf("I have picked 3 matchsticks, bringing the total count down to: %d\n",matchsticks);
			break;
			case 3:
			matchsticks-=2;
			printf("I have picked 2 matchsticks, bringing the total count down to: %d\n",matchsticks);
			break;
			case 4:
			matchsticks-=1;
			printf("I have picked 1 matchsticks, bringing the total count down to: %d\n",matchsticks);
			break;
			}
		}
	if (matchsticks<=1)
		{
		printf("the total count: %d\n",matchsticks);
		printf("Oops, seems you've lost!\n");
		}
	else 
		goto start;
	return 0;
}
	
