#include "function.h"

 int BinToHex(int binary)
 {
 long  int hexadecimal=0,i=1,remain;

 while(binary!=0)
 {
     remain=binary % 10;
     hexadecimal=hexadecimal+remain*i;
     i=i*2;
     binary=binary / 10;
 }
 return hexadecimal;
 }