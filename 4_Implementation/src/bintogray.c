#include"mylibone.h"
int bintogray(int bin)
{
    int a, b, result = 0, i = 0;

    while (bin != 0)
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
        {
            result = result + pow(10, i);
        }
        i++;
    }
    return result;
}
