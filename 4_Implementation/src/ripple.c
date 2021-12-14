#include"mylib3.h"
int ripple(int j,int k)
{
    int out;
    if (j == 0 && k == 0)
        out = 0;

    else if (j == 0 && k == 1)
        out = 0;

    else if (j == 1 && k == 0)
        out = 0;
    else if (j == 1 && k == 1)
        out = 1;
    else
        out=0;
    return out;
}
