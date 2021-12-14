#include "mylib2.h"
int demorgans1(int a,int b)
{
int c;
   if(a==0 && b==0)
   c=0;
   else if(a==0 && b==1)
   c=1;
   else if(a==1 && b==0)
   c=2;
   else 
   c=3;
    switch(c)
    {
        case 0: return(1);
        break;
        case 1: return(1);
        break;
        case 2: return(1);
        break;
        case 3:return(0);
    }
}
