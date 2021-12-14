#include "functions1.h"
int bin_dec(int binary)
{
    int decimal = 0, base = 1, remainder;
    int temp = binary;
    while(temp > 0)
    {
        remainder = temp % 10;
        decimal = decimal + remainder * base;
        temp = temp / 10;
        base = base * 2;
    }
    return decimal;
  
}