#include "mylib1.h"
int multiplication(int binary1,int binary2)
{
    int out;
    if (binary1 == 0 && binary2 == 0)
        out =0;

    else if (binary1 == 0 && binary2 == 1)
        out = 0;

    else if (binary1 == 1 && binary2 == 0)
        out = 0;
    else if (binary1 == 1 && binary2 == 1)
        out = 1;
    else
        out = 0;
    return out;
}
