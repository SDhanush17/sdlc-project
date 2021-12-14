#include "mylib1.h"
int mux4to1(int sel1,int sel2)
{
    char out;
    if (sel1 == 0 && sel2 == 0)
        out =1;

    else if (sel1 == 0 && sel2 == 1)
        out = 2;

    else if (sel1 == 1 && sel2 == 0)
        out = 3;
    else if (sel1 == 1 && sel2 == 1)
        out = 4;
    else
        out = 0;
    return out;
}
