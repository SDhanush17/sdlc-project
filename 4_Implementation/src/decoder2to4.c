#include "mylib1.h"
int decoder(int A,int B)
{
int A0,A1,A2,A3;
A0= (A^1)&(B^1);
A1=(A^1)&B;
A2=A&(B^1);
A3=A&B;
return A3,A2,A1,A0;
}
