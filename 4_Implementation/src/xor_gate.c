/**
 * @file xor_gate.c
 * @author Nagashirisha P
 * @brief This file deals with all the XOR Gate logic
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "functions.h"

int xor_gate(int a,int b)
{
    int out;
    if (a == 0 && b == 0)
        out = 0;
    else if (a == 0 && b == 1)
        out = 1;
    else if (a == 1 && b == 0)
        out = 1;
    else
        out = 0;
    return out;
}