#include "function.h"

int octal_to_binary(int octal)
{
int decimal=0,i=0;
long long binary =0;

while(octal !=0)
{
    decimal+=(octal%10)*pow(8,i);
    ++i;
    octal/=10;
}
i=1;
while (decimal!=0)
{
    binary+=(decimal % 2)*i;
    decimal/=2;
    i*=10;  
}
 return binary;
}

