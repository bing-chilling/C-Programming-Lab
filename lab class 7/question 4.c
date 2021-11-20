/*WAP to find out the equivalent resistance of three resistances form serial and parallel connections. Find the current through the circuit if they are connected to a voltage source.*/
#include <stdio.h>
int main()
{
    int r1,r2,r3,seq,volt;
    float rp, is, ip,peq;
    printf("Enter value of the 3 resistances: ");
    scanf("%d %d %d",&r1,&r2,&r3);
    printf("Enter value of voltage: ");
    scanf("%d",&volt);
    seq= r1+r2+r3;
    peq= 1.0/r1 + 1.0/r2 + 1.0/r3;
    rp=1/peq;
    is=(float)volt/seq;
    ip=volt/rp;
    printf("Equivalent resistance in series is %d\n",seq);
    printf("Equivalent resistance in parallel is %f\n",rp);
    printf("Current through the series resistance is %f\n",is);
    printf("Current through the parallel resistance is %f\n",ip);
    return 0;
    }
