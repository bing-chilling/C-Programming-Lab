/*WAP to display the position, size and type of images formed by a concave mirror*/
#include<stdio.h>
int main()
{
	int p;
	printf("Press 1, if the object is at infinity\n");
	printf("Press 2, if the object is beyond the center of curvature\n");
	printf("Press 3, if the object is at the center of curvature\n");
	printf("Press 4, if the object is between C and F\n");
	printf("Press 5, if the object is at focus F\n");
	scanf("%d",&p);
	if (p==1)
		printf("The image is at focus, highly diminished, real and inverted\n");
	else if (p==2)
		printf("The image is between focus and center of curvature, diminished, real and inverted\n");
	else if (p==3)
		printf("The image is at center of curvature, same size as object, real and inverted\n");
	else if (p==4)
		printf("The image is beyong center of curvature, enlarged, real and inverted\n");
	else if (p==5)
		printf("The image is at infinity, highly enlarged, real and inverted\n");
	
	return 0;
}
