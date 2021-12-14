#include "functions3.h"
int bcd_decimal(int a)
{
  int num, decimal_num = 0, base = 1, rem,i,r=0,t=10;
    num=a;

    while ( num > 0)
    {
       for(i=0;i<4;i++)
        {
        rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */
        decimal_num = decimal_num + rem * base;
        num = num / 10; // divide the number with quotient
        base = base * 2;
        }
        r=r+(decimal_num*t);
        decimal_num=0;
        base=1;
        t=t*10;
    }
    return r/10;

}

