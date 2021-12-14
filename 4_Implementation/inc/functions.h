/**
 * @file functions.h
 * @author Nagashirisha P
 * @brief This file deals with all the all heaader functions
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>
#include "assert.h"
void test_and_gate(void);
void test_not_gate(void);
void test_xor_gate(void);
void test_half_adder(void);
void test_half_subractor(void);

int and_gate(int a,int b);
int not_gate(int a);
int xor_gate(int a,int b);
int half_adder(int a,int b);
int half_subractor(int a,int b);

#endif