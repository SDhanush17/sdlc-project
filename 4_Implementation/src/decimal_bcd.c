#include "functions3.h"
int decimal_bcd(int a)
{
    int Number,n,i,b[10],d=0;
    Number=a;
n=(((Number/10)+((Number/100)*6))*16)+(Number%10);
for(i=0;n>0;i++)
{
b[i]=n%2;
n=n/2;
}
for(i=i-1;i>=0;i--)
d=b[i]+d*10;
return d;
}
