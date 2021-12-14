#include "functions1.h"

char dec_bin(int n)
{  
    int a[10],res,i;    
    for(i=0;n>0;i++)
    {   
     a[i]=n%2;
     n=n/2;    
    }    
    for(i=i-1;i>=0;i--)        
       {
            res= a[i]; 

       }  
    return res;
}