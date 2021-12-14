#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED
#include "math.h"

void test_srflipflop(void);
void test_jkflipflop(void);
void test_demorgans1(void);
void test_demorgans2(void);

int jkflipflop(int a,int b);
int srflipflop(int a ,int b);
int demorgans1(int a ,int b);
int demorgans2(int a, int b);
#endif // MYLIB_H_INCLUDED
