#include <stdio.h>

typedef long int value;

void main()
{
	value a,b,i,lcm=1;
	printf("Enter two numbers to find LCM of: ");
	scanf("%ld %ld",&a,&b);
	for (i=2;(a/i||b/i);++i)
	{
		if (!( (a%i)* (b%i) ))
		{
			if (!a%i)
				a/=i;
			if (!b%i)
				b/=i;
			lcm*= i;
		}
		printf("%ld\n",i);
	}
	if (lcm-1)
		printf("The two integers have LCM of value: %ld\n",lcm);
	else
		printf("The two integers do not have an lcm.\n");
}
