#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>
#include "assert.h"

void test_bin_dec(void);
void test_dec_bin(void);
void test_dec_hex(void);
void test_dec_oct(void);
void test_decimal_roman(void);

int bin_dec(int binary);
char dec_bin(int n);
int dec_hex(long int num_decimal);
int decimal_octal(int number);
int decimal_roman(int num);


#endif