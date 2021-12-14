#include "functions3.h"
int hexadecimal_decimal(int a)
{
    int hexnum, decnum=0, i=0, rem;
    hexnum=a;
    while(hexnum!=0)
    {
        rem = hexnum%10;
        decnum = decnum + (rem*pow(16,i));
        i++;
        hexnum = hexnum/10;
    }
   return decnum;
}
