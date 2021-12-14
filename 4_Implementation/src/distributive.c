/**
 * @file distributive.c
 * @author Sanjay Netagal
 * @brief In this function we have written the code for distributive law to proove the law we have declared 
 * two different variables as Y0 and Y1 We are storing LHS Part in Yo and Storing RHS part to variable in Y1 
 * So finally we prooved the law that is (A+BC)=(A+B)(A+C).
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "mylib.h"
int distributive(int a,int b,int c)
{
    int Y0,Y1;
    if(((a==0)||(a==1))&&((b==0)||(b==1))&&((c==0)||(c==1)))
    {
        Y0=(a+(b*c));
        Y1=(a+b)*(a+c);
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
