#ifndef MYLIB1_H_INCLUDED
#define MYLIB1_H_INCLUDED
void parity_test ();
void multiplication_test(void);
void mux_test(void);
void decoder_test(void);
void encoder4to2_test(void);


int getParity(unsigned int n);
int multiplication(int binary1,int binary2);
int mux4to1(int sel1,int sel2);
int decoder(int A,int B);
int encoder4to2(int a,int b,int c,int d);


#endif // MYLIB1_H_INCLUDED
