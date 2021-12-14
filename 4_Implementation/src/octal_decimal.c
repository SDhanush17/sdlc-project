#include "functions3.h"
int octal_decimal(int a)
{
    int octnum, decnum=0, i=0, rem;
    octnum=a;
    while(octnum!=0)
    {
        rem = octnum%10;
        decnum = decnum + (rem*pow(8,i));
        i++;
        octnum = octnum/10;
    }
   return decnum;
}
