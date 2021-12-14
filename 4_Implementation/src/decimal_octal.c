/* C Program to Convert Decimal to Octal Number */
#include "functions1.h"

int dec_oct(int number) 
{
    int octalNumber[10], i, j;
   // printf("\n Please Enter the Number You want to Convert  :  ");
    //scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        octalNumber[i] = number % 8;
        number = number / 8;
    }
    
    //printf("\n Equivalent Octal Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)
    { 
        return octalNumber[j];
    }
    
        //printf("%d", octalNumber[j])
}