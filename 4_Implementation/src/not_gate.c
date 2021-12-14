/**
 * @file not_gate.c
 * @author Nagashirisha P
 * @brief This file deals with all the NOT Gate logic
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "functions.h"

int not_gate(int a)
{
    int  out;
    out = !(a);
    return out;
}