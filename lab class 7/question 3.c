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
    printf("\n Secondary coltage comes out to be: %f",sv);
    return 0;
    }
