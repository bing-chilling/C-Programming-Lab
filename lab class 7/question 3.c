/*WAP to find out the secondary voltage of a transformer if primary voltage, turns of primary and secondary voltage are given (input)*/
#include <stdio.h>
int main()
{
    int pt,st,pv;
    float sv;
    printf("Enter value of primary volatge: ");
    scanf("%d", &pv);
    printf("\nEnter number of primary turns: ");
    scanf("%d",&pt);
    printf("\nEnter number of secondary turns: ");
    scanf("%d",&st);
    sv=((float)pv*st)/pt;
    printf("\n Secondary voltage comes out to be: %f\n",sv);
    return 0;
    }
