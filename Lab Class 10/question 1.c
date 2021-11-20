/*Username=='a', Password==123. Check whether Username and Password are correct or not*/
#include<stdio.h>
int main()
{
	char username;
	int password;
	start:
	printf("Enter the username: ");
	scanf("%c",&username);
	printf("Enter password: ");
	scanf("%d",&password);
	if (username=='a')
		{
		if (password==123)
			printf("Welcome, a!\n");
		else
			{
			printf("Invalid password\n");
			}
		}
	else
		{
		printf("Invalid username\n");
		}
		
	return 0;
}
