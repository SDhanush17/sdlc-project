#include "functions3.h"

int octal_binary(int a)
{
    int octalDigitToBinary[8] = {0, 1, 10, 11, 100, 101, 110, 111};
    int octalNumber, binaryNumber = 0, position,digit;

   octalNumber=a;
    position = 1;
    while(octalNumber != 0) {
        digit = octalNumber % 10;
        binaryNumber = (octalDigitToBinary[digit-1] * position) + binaryNumber;
        octalNumber /= 10;
        position *= 1000;
    }


    return binaryNumber;
}
