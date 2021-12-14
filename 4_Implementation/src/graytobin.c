#include"mylibone.h"

int graytobin(int gray)
{
    int a[10],i=0,c=0;
    while(gray!=0)
    {
        a[i]=gray%10;
        gray/=10;
        i++;
        c++;

    }
    for(i=c-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            if(a[i-1]==1)
            a[i-1]=0;
            else
            a[i-1]=1;

        }

    }
    for(i=c-1;i>=0;i--)
        return a[i];
}
