#include <stdio.h>

enum subject
{
	maths, physics, chemistry, english
};

void main()
{
	enum subject class12,a;
	a= class12 + 12;
	printf("%d, %d subject\n",a, class12+3);
	class12 = chemistry;
	a= english;
	printf("%d, %d subject\n",a, class12+3);
}
