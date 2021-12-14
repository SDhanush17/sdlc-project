/**
 * @file test_main.c
 * @author Sanjay Netagal
 * @brief In this main function I included Header files for accesing all the function names which are declared in that file.
 * And also included unity.h file for unit testing.
 * In this function it contains all the test cases for testing all the functionality
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "mylib.h"
#include "functions.h"
#include "function.h"
#include "functions1.h"
#include "functions3.h"
#include"mylibone.h"
#include "operations.h"
#include "mylib1.h"
#include "mylib2.h"
#include "unity.h"

void setUp(){	}
void tearDown(){	}

void minterm_test(void)
{
    TEST_ASSERT_EQUAL(1, minterm(0,0));
    TEST_ASSERT_EQUAL(1, minterm(1,0));
    TEST_ASSERT_EQUAL(1, minterm(1,1));
    TEST_ASSERT_EQUAL(1, minterm(0,1));
    TEST_ASSERT_EQUAL(0, minterm(5,4));

}

void maxterm_test(void)
{
    TEST_ASSERT_EQUAL(0, maxterm(0,0));
    TEST_ASSERT_EQUAL(0, maxterm(1,0));
    TEST_ASSERT_EQUAL(0, maxterm(1,1));
    TEST_ASSERT_EQUAL(0, maxterm(0,1));
    TEST_ASSERT_EQUAL(0, maxterm(5,4));
}
void SOP_test(void)
{
    TEST_ASSERT_EQUAL(0, SOP(0,0));
    TEST_ASSERT_EQUAL(1, SOP(1,0));
    TEST_ASSERT_EQUAL(1, SOP(1,1));
    TEST_ASSERT_EQUAL(1, SOP(0,1));
    TEST_ASSERT_EQUAL(0, SOP(5,4));
}
void POS_test(void)
{
    TEST_ASSERT_EQUAL(1, POS(0,1));
    TEST_ASSERT_EQUAL(1, POS(1,1));
    TEST_ASSERT_EQUAL(1, POS(0,1));
    TEST_ASSERT_EQUAL(0, POS(5,4));
}

void associative_test(void)
{
    TEST_ASSERT_EQUAL(1, associative(0,0,0));
    TEST_ASSERT_EQUAL(1, associative(0,0,1));
    TEST_ASSERT_EQUAL(1, associative(1,1,0));
    TEST_ASSERT_EQUAL(1, associative(1,0,1));
    TEST_ASSERT_EQUAL(0, associative(5,4,6));
}

void commutative_test(void)
{
    TEST_ASSERT_EQUAL(1, commutative(0,0));
    TEST_ASSERT_EQUAL(1, commutative(0,0));
    TEST_ASSERT_EQUAL(1, commutative(1,1));
    TEST_ASSERT_EQUAL(1, commutative(1,0));
    TEST_ASSERT_EQUAL(0, commutative(5,4));
}

void distributive_test(void)
{
    TEST_ASSERT_EQUAL(1, distributive(0,0,0));
    TEST_ASSERT_EQUAL(1, distributive(0,0,1));
    TEST_ASSERT_EQUAL(1, distributive(1,0,0));
    TEST_ASSERT_EQUAL(1, distributive(0,1,0));
    TEST_ASSERT_EQUAL(0, distributive(5,4,6));
}

void absorption_test(void)
{
    TEST_ASSERT_EQUAL(1, absorption(0,0));
    TEST_ASSERT_EQUAL(1, absorption(0,0));
    TEST_ASSERT_EQUAL(1, absorption(1,0));
    TEST_ASSERT_EQUAL(0, absorption(5,4));
}

void test_and_gate(void)
{
  TEST_ASSERT_EQUAL(0,(and_gate(1,0)));
  TEST_ASSERT_EQUAL(0,(and_gate(0,1)));
  TEST_ASSERT_EQUAL(1,(and_gate(1,1)));
  TEST_ASSERT_EQUAL(0,(and_gate(0,0)));
}

void test_not_gate(void)
{
  TEST_ASSERT_EQUAL(0,(not_gate(1)));
  TEST_ASSERT_EQUAL(1,(not_gate(0)));
}

void test_xor_gate(void)
{
  TEST_ASSERT_EQUAL(1,(xor_gate(1,0)));
  TEST_ASSERT_EQUAL(1,(xor_gate(0,1)));
  TEST_ASSERT_EQUAL(0,(xor_gate(1,1)));
  TEST_ASSERT_EQUAL(0,(xor_gate(0,0)));
}

void test_half_adder(void)
{
  TEST_ASSERT_EQUAL((1,0),(half_adder(1,0)));
  TEST_ASSERT_EQUAL((1,0),(half_adder(0,1)));
  TEST_ASSERT_EQUAL((0,1),(half_adder(1,1)));
  TEST_ASSERT_EQUAL((0,0),(half_adder(0,0)));
}

void test_half_subractor(void)
{
  TEST_ASSERT_EQUAL((1,0),(half_subractor(1,0)));
  TEST_ASSERT_EQUAL((1,1),(half_subractor(0,1)));
  TEST_ASSERT_EQUAL((0,0),(half_subractor(1,1)));
  TEST_ASSERT_EQUAL((0,0),(half_subractor(0,0)));
}

void test_xnor(void)
{
  TEST_ASSERT_EQUAL(0,(xnor(1,0)));
  TEST_ASSERT_EQUAL(0,(xnor(0,1)));
  TEST_ASSERT_EQUAL(1,(xnor(1,1)));
  TEST_ASSERT_EQUAL(1,(xnor(0,0)));
}

void test_octal_to_binary(void)
{
  TEST_ASSERT_EQUAL((11111111),(octal_to_binary(377)));
  TEST_ASSERT_EQUAL((101010),(octal_to_binary(52)));
}

void test_BinToHex(void)
{
  TEST_ASSERT_EQUAL(5,(BinToHex(101)));
  TEST_ASSERT_EQUAL(3,(BinToHex(11)));
}

void test_binaryToOctal(void)
{
  TEST_ASSERT_EQUAL((125),(binaryToOctal(1010101)));
  TEST_ASSERT_EQUAL((17),(binaryToOctal(1111)));

}

void test_bin_dec(void)
{
  TEST_ASSERT_EQUAL(5,(bin_dec(101)));
  TEST_ASSERT_EQUAL(6,(bin_dec(110)));

}
void test_dec_bin(void)
{
  TEST_ASSERT_EQUAL((1,0,1),(dec_bin(5)));
  TEST_ASSERT_EQUAL((1,1,1),(dec_bin(7)));

}

void test_octal(void){

TEST_ASSERT_EQUAL(140, octal_decimal(214 ));
}
void test_bcd(void){

TEST_ASSERT_EQUAL(83, bcd_decimal(10000011 ));
}
void test_hexadecimal(void){

TEST_ASSERT_EQUAL(292, hexadecimal_decimal(124 ));
}
void test_decimal(void){

TEST_ASSERT_EQUAL(110010, decimal_bcd(32 ));
}
void test_octalb(void){

TEST_ASSERT_EQUAL(111111, octal_binary(88));
}

void bintogray_test(void)
{
    TEST_ASSERT_EQUAL(10,(bintogray(11)));
    TEST_ASSERT_EQUAL(11,(bintogray(10)));
}

void graytobin_test(void)
{
    TEST_ASSERT_EQUAL((1,1),(graytobin(10)));
    TEST_ASSERT_EQUAL((1,1,1),(graytobin(101)));
}

void test_total_ser(void) {
  TEST_ASSERT_EQUAL(90.000000, total_ser(30,20,40));
  TEST_ASSERT_EQUAL(11900.000000, total_ser(2400,4500,5000));
  TEST_ASSERT_EQUAL(7000.000000, total_ser(0,2500,4500));
  TEST_ASSERT_EQUAL(5004000.000000, total_ser(5000000,4000,0));



}

void test_total_par(void) {
  TEST_ASSERT_EQUAL(1.668823,total_par(6,5,4.3));
  TEST_ASSERT_EQUAL(318.584076,total_par(2400,4500,400));
  TEST_ASSERT_EQUAL(23.028822,total_par(45,56,299));
}

void test_cal_res(void) {
  TEST_ASSERT_EQUAL(5.000000, cal_res(12,2.4));
  TEST_ASSERT_EQUAL(3.500000, cal_res(28,8));
  TEST_ASSERT_EQUAL(5.562500, cal_res(44.5,8));
  
}

void test_res_val(void) {
  TEST_ASSERT_EQUAL(68000, res_val(6,8,0,2));
  
}

void test_unit_conv1(void) {
  TEST_ASSERT_EQUAL(46500.000000, unit_conv1(46.50));
  
}

void test_unit_conv2(void) {
  TEST_ASSERT_EQUAL(1.500000, unit_conv2(1500));
  
  
}

void test_unit_conv3(void) {
  TEST_ASSERT_EQUAL(5000000.000000, unit_conv3(5));
  

}

void test_unit_conv4(void) {
  TEST_ASSERT_EQUAL(4.000000, unit_conv4(4000000));
  
}
void parity_test (void)
{
    TEST_ASSERT_EQUAL(1,getParity(7));
    TEST_ASSERT_EQUAL(0,getParity(9));
}

void test_decimal_roman(void)
{
  TEST_ASSERT_EQUAL(('V'),(decimal_roman(5)));
  TEST_ASSERT_EQUAL(('X'),(decimal_roman(10)));
}

void test_dec_oct(void)
{
    TEST_ASSERT_EQUAL((4,4),(dec_oct(33)));
    TEST_ASSERT_EQUAL((3,1,3),(dec_oct(200)));

}

void test_srflipflop(void)
{
   TEST_ASSERT_EQUAL(1,srflipflop(1,0));
}
void test_jkflipflop(void)
{
   TEST_ASSERT_EQUAL(1,jkflipflop(1,0));
}
void test_demorgans1(void){

TEST_ASSERT_EQUAL(1, demorgans1(0,0));
}
void test_demorgans2(void){

TEST_ASSERT_EQUAL(1, demorgans2(1,1));
}

void test_nand_gate(void)
{
  TEST_ASSERT_EQUAL(1,(nand(1,0)));
  TEST_ASSERT_EQUAL(1,(nand(0,1)));
  TEST_ASSERT_EQUAL(0,(nand(1,1)));
  TEST_ASSERT_EQUAL(1,(nand(0,0)));
}

void test_nor_gate(void)
{
  TEST_ASSERT_EQUAL(0,(nor(1,0)));
  TEST_ASSERT_EQUAL(0,(nor(0,1)));
  TEST_ASSERT_EQUAL(0,(nor(1,1)));
  TEST_ASSERT_EQUAL(1,(nor(0,0)));
}
void test_adder(void)
{
  TEST_ASSERT_EQUAL((0,0),(full_adder(0,0,0)));
  TEST_ASSERT_EQUAL((1,0),(full_adder(0,1,0)));
  TEST_ASSERT_EQUAL((0,1),(full_adder(0,1,1)));
  TEST_ASSERT_EQUAL((1,0),(full_adder(1,0,0)));
  TEST_ASSERT_EQUAL((1,1),(full_adder(1,1,1)));
}
void test_encoder(void)
{
  TEST_ASSERT_EQUAL((0,0),(encoder(0,0,0,1)));
  TEST_ASSERT_EQUAL((0,1),(encoder(0,0,1,0)));
  TEST_ASSERT_EQUAL((1,0),(encoder(0,1,0,0)));
  TEST_ASSERT_EQUAL((1,1),(encoder(1,0,0,0)));
}
void test_ripple(void)
{
  TEST_ASSERT_EQUAL(0,(ripple(0,0)));
  TEST_ASSERT_EQUAL(0,(ripple(0,1)));
  TEST_ASSERT_EQUAL(0,(ripple(1,0)));
  TEST_ASSERT_EQUAL(1,(ripple(1,1)));
}

void bintoxs3_test(void)
{
    TEST_ASSERT_EQUAL((0,1,1),(bintoxs3(000)));

}

void complement1_test(void)
{
    TEST_ASSERT_EQUAL(2,(complement1(5)));
    TEST_ASSERT_EQUAL(5,(complement1(26)));
}

void multiplication_test(void)
{
    TEST_ASSERT_EQUAL(0,(multiplication(0,0)));
    TEST_ASSERT_EQUAL(0,(multiplication(0,1)));
    TEST_ASSERT_EQUAL(0,(multiplication(1,0)));
    TEST_ASSERT_EQUAL(1,(multiplication(1,1)));
}
void mux_test(void)
{
    TEST_ASSERT_EQUAL((1),(mux4to1(0,0)));
    TEST_ASSERT_EQUAL((2),(mux4to1(0,1)));
    TEST_ASSERT_EQUAL((3),(mux4to1(1,0)));
    TEST_ASSERT_EQUAL((4),(mux4to1(1,1)));
}
void decoder_test(void)
{
    TEST_ASSERT_EQUAL((0,0,0,1),(decoder(0,0)));
    TEST_ASSERT_EQUAL((0,0,1,0),(decoder(0,1)));
    TEST_ASSERT_EQUAL((0,1,0,0),(decoder(1,0)));
    TEST_ASSERT_EQUAL((1,0,0,0),(decoder(1,1)));
}
void encoder4to2_test(void)
{
    TEST_ASSERT_EQUAL((0,0),(encoder4to2(0,0,0,1)));
    TEST_ASSERT_EQUAL((0,1),(encoder4to2(0,0,1,0)));
    TEST_ASSERT_EQUAL((1,0),(encoder4to2(0,1,0,0)));
    TEST_ASSERT_EQUAL((1,1),(encoder4to2(1,0,0,0)));
}

void main()
	{
	  	UNITY_BEGIN();
	  	RUN_TEST(minterm_test);
	  	RUN_TEST(maxterm_test);
	  	RUN_TEST(SOP_test);
	  	RUN_TEST(POS_test);
	  	RUN_TEST(associative_test);
	  	RUN_TEST(commutative_test);
	  	RUN_TEST(distributive_test);
	  	RUN_TEST(absorption_test);
      RUN_TEST(test_and_gate);
      RUN_TEST(test_not_gate);
      RUN_TEST(test_xor_gate);
      RUN_TEST(test_half_adder);
      RUN_TEST(test_half_subractor);
      RUN_TEST(test_xnor);
      RUN_TEST(test_octal_to_binary);
      RUN_TEST(test_BinToHex);
      RUN_TEST(test_binaryToOctal);
      RUN_TEST(test_bin_dec);
      RUN_TEST(test_dec_bin);
      RUN_TEST(test_octal);
      RUN_TEST(test_bcd);
      RUN_TEST(test_hexadecimal);
      RUN_TEST(test_decimal);
      RUN_TEST(test_octalb);
      RUN_TEST(bintogray_test);
      RUN_TEST(graytobin_test);
      RUN_TEST(test_total_ser);
      RUN_TEST(test_total_par);
      RUN_TEST(test_unit_conv1);
      RUN_TEST(test_unit_conv2);
      RUN_TEST(test_unit_conv3);
      RUN_TEST(test_unit_conv4);
      RUN_TEST(test_cal_res);
      RUN_TEST(test_res_val);
      RUN_TEST(parity_test);
      RUN_TEST(test_decimal_roman);
      RUN_TEST(test_dec_oct);
      RUN_TEST(test_jkflipflop);
      RUN_TEST(test_srflipflop);
      RUN_TEST(test_demorgans1);
      RUN_TEST(test_demorgans2);
      RUN_TEST(test_nand_gate);
      RUN_TEST(test_nor_gate);
      RUN_TEST(test_adder);
      RUN_TEST(test_encoder);
      RUN_TEST(test_ripple);
      RUN_TEST(bintoxs3_test);
      RUN_TEST(complement1_test);
      RUN_TEST(multiplication_test);
      RUN_TEST(mux_test);
      RUN_TEST(decoder_test);
      RUN_TEST(encoder4to2_test);
      return UNITY_END();
	}
