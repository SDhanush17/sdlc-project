#include"mylibone.h"

int dectobin(int n)
{  
    int a[10],i;       
    for(i=0;n>0;i++)
    {   
     a[i]=n%2;
     n=n/2;    
    }   
    for(i=i-1;i>=0;i--)        
        return a[i];
}  