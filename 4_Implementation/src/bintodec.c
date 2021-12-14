#include"mylibone.h"

int bintodec(int bin)
{
int rem,deci=0,base=1;
int temp=bin;
    while (bin > 0)
    {
        rem= temp % 10;
        deci=deci+rem*base;
        temp = temp / 10;
        base=base*2;
    }
    return deci;
}



