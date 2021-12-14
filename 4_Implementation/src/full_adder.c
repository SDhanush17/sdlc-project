#include"mylib3.h"
int full_adder(int a,int b,int c)
{
    int sum,carry;
    if (a == 0 && b == 0&& c == 0)
    {
        sum = 0;
        carry=0;
    }
    else if (a == 0 && b == 0&& c == 1)
    {
        sum = 1;
        carry=0;
    }
    else if (a == 0 && b == 1&& c == 0)
    {
        sum =1;
        carry=0;
    }
    else if (a == 0 && b == 1&& c == 1)
    {
        sum =0;
        carry=1;
    }
    else if (a == 1 && b == 0&& c == 0)
    {
        sum =1;
        carry=0;
    }
    else if (a == 1 && b == 0&& c == 1)
    {
        sum =0;
        carry=1;
    }


    else if (a == 1 && b == 1&& c == 0)
    {
        sum =0;
        carry=1;
    }
    else if (a == 1 && b == 1&& c == 1)
    {
        sum =1;
        carry=1;
    }
    else
    {
        sum = 0;
        carry=0;
    }
    return sum,carry;
}
