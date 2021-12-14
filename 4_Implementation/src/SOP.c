/**
 * @file SOP.c
 * @author Sanjay Netagal
 * @brief In this function we have written the code for finding the SOP value and for that the expression is written by 
 * refering to the truth table.
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "mylib.h"
int SOP(int a,int b)
{
    int Y=0;
    if(((a==0)||(a==1))&&((b==0)||(b==1)))
    {
        Y=b+(a*(b^1));
        return Y;
    }
    else
    {
     return 0;
    }
  return 0;
}
