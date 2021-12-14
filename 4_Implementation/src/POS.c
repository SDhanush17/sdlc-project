/**
 * @file POS.c
 * @author Sanjay Netagal
 * @brief In this function we have written the code for finding the POS value and for that the expression is written by 
 * refering to the truth table.
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "mylib.h"
int POS(int a,int b)
{
    int Y=0;
    if(((a==0)||(a==1))&&((b==0)||(b==1)))
    {
        Y=(a*(b^1))+b;
        return Y;
    }
    else
    {
     return 0;
    }
  return 0;
}
