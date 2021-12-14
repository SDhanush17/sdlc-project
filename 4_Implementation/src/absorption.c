/**
 * @file absorption.c
 * @author Sanjay Netagal
 * @brief Absorption law involves in linking of a pair of binary operations. So basically in this function it will return the 
 * 1 value when it follows the law.
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "mylib.h"
int absorption(int a,int b)
{
    int Y0,Y1;
    if(((a==0)||(a==1))&&((b==0)||(b==1)))
    {
        Y0=(a+(a*b));
        Y1=a;
        if(Y0==Y1)
        {
            return 1;
        }
    }
    else
    {
     return 0;
    }
  return 0;
}
