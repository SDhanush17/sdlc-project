#include"mylib3.h"
int nor(int a,int b)
{
    int out;
    if (a == 0 && b == 0)
        out = 1;

    else if (a == 0 && b == 1)
        out = 0;

    else if (a == 1 && b == 0)
        out = 0;
    else
        out = 0;
    return out;
}
