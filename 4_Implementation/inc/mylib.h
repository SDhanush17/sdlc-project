/**
 * @file mylib.h
 * @author Sanjay Netagal
 * @brief In this function it is a header file in this file i added all the function names which are called in the main function
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED

int maxterm(int a, int b);
int minterm(int a, int b);
int SOP(int a,int b);
int POS(int a,int b);
int associative(int a,int b,int c);
int distributive(int a,int b,int c);
int commutative(int a,int b);
int absorption(int a,int b);


#endif // MYLIB_H_INCLUDED
