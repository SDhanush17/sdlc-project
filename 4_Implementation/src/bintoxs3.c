#include"mylibone.h"

int bintoxs3(int bin)
{
    int dec;
    long long excess;
    dec=bintodec(bin);
    excess = dectobin(dec+3);
    return excess;
}

