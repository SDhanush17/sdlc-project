#include "mylib1.h"
int encoder4to2(int a,int b,int c,int d)
{
    int out1,out2;
    if(a == 0 && b == 0 && c==0 && d==1)
    {
        out1=0;
        out2=0;
    }
    else if(a == 0 && b == 0 && c==1 && d==0)
    {
         out1=0;
         out2=1;
    }
    else if (a == 0 && b == 1&& c==0 && d==0)
    {
        out1=1;
        out2=0;
    }
    else if (a == 1 && b == 0&& c==0 && d==0)
    {
        out1=1;
        out2=1;
    }
    else
    {
        out1=0;
        out2=0;
    }
    return out1,out2;
}
