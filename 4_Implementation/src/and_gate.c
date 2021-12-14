/**
 * @file and_gate.c
 * @author Nagashirisha P
 * @brief This file deals with all the AND Gate logic
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "functions.h"

int and_gate(int a,int b)
{
    int out;
    if (a == 0 && b == 0)
        out = 0;
  
    else if (a == 0 && b == 1)
        out = 0;
  
    else if (a == 1 && b == 0)
        out = 0;
    else
        out = 1;
    return out;
}