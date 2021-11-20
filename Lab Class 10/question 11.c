/*WAP to input any three integers dictinct, then find and display the middle value of the three integers using ternary operator*/
#include<stdio.h>
int main()
{
	int a,b,c,x,y,z;
	printf("Enter 3 integers: ");
	scanf("%d %d %d",&a,&b,&c);
	x= (((c<b)&&(b<a))||((a<b)&&(b<c)))?b:0; 
	y= (((b<c)&&(c<a))||((a<c)&&(c<b)))?c:0;
	z= (((b<a)&&(a<c))||((c<a)&&(a<b)))?a:0;
	printf("The 2nd greatest integer is: %d\n",x+y+z);
	return 0;
}
