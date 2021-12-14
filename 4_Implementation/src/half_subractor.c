/**
 * @file half_subractor.c
 * @author Nagashirisha P
 * @brief This file deals with all the half subractor logic using AND,NOT &XOR gates
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "functions.h"

int half_subractor(int a,int b)
{
    int diff,borrow;
    if (a == 0 && b == 0)
    {
        diff = 0;
        borrow=0;
    }
    else if (a == 0 && b == 1)
    {
        diff = 1;
        borrow=1;
    }
    else if (a == 1 && b == 0)
    {
        diff =1;
        borrow=0;
    }
    else
    {
        diff = 0;
        borrow=0;
    }
    return diff,borrow;
}