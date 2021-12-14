/**
 * @file associative.c
 * @author Sanjay Netagal
 * @brief Law is for example A+(B+C) = (A+B)+C
 * So In this function it will check the condition accordingly it will return the value
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "mylib.h"
int associative(int a,int b,int c)
{
    int Y0,Y1;
    if(((a==0)||(a==1))&&((b==0)||(b==1))&&((c==0)||(c==1)))
    {
        Y0=(a+(b+c));
        Y1=((a+b)+c);
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
