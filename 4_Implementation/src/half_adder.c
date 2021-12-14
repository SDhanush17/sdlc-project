/**
 * @file half_adder.c
 * @author Nagashirisha P
 * @brief This file deals with all the half adder logic using AND & NOT gates
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "functions.h"

int half_adder(int a,int b)
{
    int sum,carry;
    if (a == 0 && b == 0)
    {
        sum = 0;
        carry=0;
    }
    else if (a == 0 && b == 1)
    {
        sum = 1;
        carry=0;
    }
    else if (a == 1 && b == 0)
    {
        sum =1;
        carry=0;
    }
    else
    {
        sum = 0;
        carry=1;
    }
    return sum,carry;
}
