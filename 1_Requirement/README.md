## Introduction:
The digital Trainer Kit is designed and developed to know the functionality of the Digital Electronic Circuits.Basically it contains all the basic operations in digital electronics like Gates,Boolean functions,Code Conversions, Combinational Logic, Magnitude Comparators, Boolean laws, Addtions, Subtractions and etc.
## Objective
The main objective of this project are:
-   To do all the operations of the different concepts of Digital Electronics Circuts.
-   It will be basically helps for the beginners to learn the funtionalities of Circuits.
-   To acquire the basic knowledge to understand digital electronics circuits

## Brief Explaination about the functionalities
### Minterm
- The product of all literals, either with complement or without complement, is known as minterm.
- If the variable value is 1, we will take the variable without its complement.
- If the variable value is 0, take its complement.
### Maxterm
- The sum of all literals, either with complement or without complement, is known as maxterm.
- If the variable value is 1, then we will take the variable with a complement.
- If the variable value is 0, then we will not take complement of the variable.
### Sum Of Product(SOP)
- Sum of Product is the abbreviated form of SOP. Sum of product form is a form of expression in Boolean algebra in which different product terms of inputs are being summed together.
- This product is not arithmetical multiply but it is Boolean logical AND and the Sum is Boolean logical OR.
### Product OF Sum(POS)
- The product of Sum form is a form in which products of different sum terms of inputs are taken.
- These are not arithmetic product and sum but they are logical Boolean AND and OR respectively.
### Flipflops
A flip flop is an electronic circuit with two stable states that can be used to store binary data. The stored data can be changed by applying varying inputs. Flip-flops and latches are fundamental building blocks of digital electronics systems used in computers, communications, and many other types of systems.
### DeMorgans theroems
DeMorgan’s First theorem proves that when two (or more) input variables are AND’ed and negated, they are equivalent to the OR of the complements of the individual variables. Thus the equivalent of the NAND function will be a negative-OR function, proving that A.B = A+B. 
DeMorgan’s Second theorem proves that when two (or more) input variables are OR’ed and negated, they are equivalent to the AND of the complements of the individual variables. Thus the equivalent of the NOR function is a negative-AND function proving that A+B = A.B


### Boolean Laws
#### Associative Law
- Laws
  - A.(B.C) = (A.B).C
  - A+(B+C) = (A+B)+C
  
- Thus, by the above expression, we can understand that it does not matter how we group or associate the numbers in addition and multiplication. The associative law holds only for the addition and multiplication of all the real numbers but not for subtraction and division.
### Distributive Law
- The Distributive Law says that multiplying a number by a group of numbers added together is the same as doing each multiplication separately.
- (A+BC)=(A+B)(A+C)
### Commutative Law
- The definition of commutative law states that when we add or multiply two numbers then the resultant value remains the same, even if we change the position of the two numbers.
- Laws
  - (A+B)=(B+A)
  - (A.B)=(B.A)
### Absorption Law
- Absorption law involves in linking of a pair of binary operations.
  - A+AB = A
  - A(A+B) = A
  - A+ĀB = A+B
  - A.(Ā+B) = AB
## Number System Conversion Methods
Number system conversions deal with the operations to change the base of the numbers. For example, to change a decimal number with base 10 to binary number with base 2. We can also perform the arithmetic operations like addition, subtraction, multiplication on the number system.
### Decimal to Binary Number
Division of integer part and successive quotients with base 2.
Multiplication of fractional part and successive fractions with base 2.
### Decimal to Octal Conversion
Division of integer part and successive quotients with base 8.
Multiplication of fractional part and successive fractions with base 8.
### Decimal to Hexa-Decimal Conversion
Division of integer part and successive quotients with base 16.
Multiplication of fractional part and successive fractions with base 16.
### Binary to Decimal Conversion
A binary number into its equivalent decimal number, first multiply the bits of binary number with the respective positional weights and then add all those products.
### Octal to Binary Conversion
Octal number is converted into its equivalent binary number by representing each digit with its 3 bit binary equivalent.
### Hexadecimal to Decimal
A hexadecimal number is converted into its equivalent decimal number, firstly multiply the digits of hexadecimal number with 16 raised to the power of their respective positional weights and then add all those products.
### Octal to Decimal
A octal number is converted into its equivalent decimal number, firstly multiply the digits of octal number with 8 raised to the power of their respective positional weights and then add all those products.
### Decimal to BCD
A decimal number is converted into its equivalent BCD by representing each digit with its 4 bit binary equivalent .
### BCD to Decimal
BCD is converted into its equivalent decimal number by taking 4 bits at a time and writing its deciaml equivalent .
### NAND gate
NAND gate has the property of functions completeness.This means that any Boolean expression can be re-expressed by an equivalent expression utilizing only NAND operation.It helps to detect if a signale input to a digital system has gone low.
### NOR gate
produces a logic 0 at its output only if all inputs are logic 0.produces a logic 1 at its output only if all inputs are logic 1.produces a logic 0 at its any or all input are logic1.
### Full Adder
Full adder is the adder which addes three inouts and produces two outputs.the first two inputs are A and B and the third input is an input carry as C-OUT and the normal output is designated as S which is SUM.
### Encoder
An encoder in digithal electronics is a one-hot to binary converter.so if there are 2^n input line,and at most only one of them will ever be high ,the binary code of this 'hot' line is produced on the n-bit output line .A binary encoder is the dual of a binary decoder.
### Decoder
Decoder is a combinational circuit that has ‘n’ input lines and maximum of 2n output lines. One of these outputs will be active High based on the combination of inputs present, when the decoder is enabled.

Here lets consider A1 and A0 as inputs and enable E as high then the outputs will be :
- Y3=E.A1.A0 
- Y2=E.A1.A0′
- Y1=E.A1′.A0
- Y0=E.A1′.A0′
### Ripple counter
Ripple counter is a special type of Asynchronous counter in which the clock pulse ripples through the circuit.
## Parity check
A parity check is the process that ensures accurate data transmission between nodes during communication. A parity bit is appended to the original data bits to create an even or odd bit number; the number of bits with value one.

- Example: 101101 contains total 4 number of ones so even parity.
           101111 contains total 5 number of ones so odd parity.
## Bitwise multiplication
The product of multiplying any binary number x by a single binary digit is always either 0 or x. Therefore, the multiplication of two binary numbers comes down to shifting the multiplicand left appropriately for each non-zero bit in the multiplier, and then adding the shifted numbers together.
- 0 × 0 = 0
- 0 × 1 = 0
- 1 × 0 = 0
- 1 × 1 = 1  

## XNOR GATE 
The Xnor gate is digital logic gate with two inputs and one output .The output of the Xnor gate is true only when both inputs are same.
## Binary to octal conversion
Multiply each bit with 2 power raised to their postional weights and add all the products 
## Binary to Hexadecimal conversion
Multiply eaxh bit with 2 raised to the power their respective positionl weights and add after multiplication.
## Octal to binary
convert each octal digit to its 3 digit binary representation then the result is the binary number.
### AND GATE
An AND gate is a logic gate having two or more inputs and a single output.
A HIGH output results only if all the inputs to the AND gate are HIGH. If none or not all inputs to the AND gate are HIGH, a LOW output results.
### NOT GATE
A NOT gate always have high or logical 1 output when its input is low or logical 0. On the other hand a logical NOT gate always have low or logical 0 output when input is high or logical 1.
### XOR GATE
It gives the true output when the true inputs number is odd and gives a false value when the true input number is not odd that means if inputs are not the same, the output is true; otherwise, false.
### HALF ADDER
The half adder is able to add two single binary digits and provide the output plus a carry value.
### HALF SUBRACTOR
It subtracts the two binary values at its input in order to generate a difference of the two values at its output using a borrow bit if required.

## SWOT Analysis- Strengths, and Weakness, Opportunities Threats
![Untitled](https://user-images.githubusercontent.com/89605184/140011378-ea55f73a-4592-4689-a38f-5fc451bef142.png)

# 4W's and 1'H
- **WHAT** : To know the Digital Electronics Circuits Functionality.
- **WHERE** : Used in Digital Labs.
- **WHEN** : The Beginner wants to know the functionality.
- **WHY** : Why For Understanding the digital circuits.
- **HOW** :  With the Gates and Operated by user.

### HIGH LEVEL REQUIREMENT
|ID|DESCRIPTION|
|:--:|:--|
|HR01|Minterm Working and Truth table | 
|HR02|Maxterm Working and Truth table |
|HR03|SOP Working and Truth table |
|HR04|Boolean laws Working and Truth table |
|HR05|POS Working and Truth table |
|HR06|Implementing AND gate logic| 
|HR07|Implementing NOT gate logic|
|HR08|Implementing XOR gate logic|
|HR09|Implementing Half adder circuit logic|
|HR010|Implementing Half subtractor circuit logic|
|HR011|Implementing XNOR gate logic|
|HR012|Binary to Octal Conversion|
|HR013|Binary to Hexadecimal Conversion|
|HR014|Octal to Binary Conversion|
|HR015|Implementing NAND gate logic|
|HR016|Implementing NOR gate logic|
|HR017|Implementing Fulladder circuit logic|
|HR018|Implementing Encoder circuit logic|
|HR019|Implementing Ripple counter logic|
|HR020|In the high level requirement, we must have the knowledge of concept value of mutpliers and tolerances associated with each color band.
| |![Resistor-color-code-chart](https://user-images.githubusercontent.com/89680649/132282025-1a5c2385-13dd-4819-989d-cf9be5f4f8d3.png)|
|HR021|Decimal to Octal Conversion|
|HR022|Decimal to Roman Conversion|
|HR023|Binary to Decimal Conversion|
|HR024|Decimal to Binary Conversion|
|HR025|Binary to Gray Conversion|
|HR026|Gray to Binary Conversion|
|HR027|Binary to Excess3 Conversion|
|HR028|1's Complement|
|HR029|Octal to Binary Conversion|
|HR030|Hexadecimal to Decimal Conversion|
|HR031|Octal to Decimal Conversion|
|HR032|Decimal to BCD Conversion|
|HR033|BCD to Decimal Conversion|
|HR034|implementation of SR flipflop|
|HR035|implementation of JK flipflop|
|HR036|implementation of Demorgans Theorem 1|
|HR037|implementation of Demorgans Theorem 2|
|HR038|implementation of parity check|
|HR039|bitwise multiplication|
|HR040|implementation of 4_1decoder|
### LOW LEVEL REQUIREMENT
|ID|DESCRIPTION|Status|
|:--:|:--:|:--:|
|LR01|Checking the conditions weather the inputs are either 0 or 1 with help of looping concept then executes `Y=((a^1)*(b^1))+((a^1)*b)+(a*(b^1))+(a*b)`and a created multifile to improve the quality of code|Completed|
|LR02|Checking the conditions weather the inputs are either 0 or 1 with help of looping concept then executes `Y=((a^1)+(b^1))*((a^1)+b)*(a+(b^1))*(a+b)`and a created multifile to improve the quality of code|Completed|
|LR03|Checking the conditions weather the inputs are either 0 or 1 with help of looping concept then executes `Y=b+(a*(b^1))`and a created multifile to improve the quality of code|Completed|
|LR04|Checking the conditions weather the inputs are either 0 or 1 with help of looping concept, There are 4 Boolean laws they are Associative=A+(B+C) = (A+B)+C, Commutative=(A+B)=(B+A), Distributive=(A+BC)=(A+B)(A+C) and Absorption=A+AB = A and then returns 1 if the law is true or else it will return 0 if false and a created multifile to improve the quality of code|Completed|
|LR05|Checking the conditions weather the inputs are either 0 or 1 with help of looping concept then executes `Y=(a*(b^1))+b`and a created multifile to improve the quality of code|Completed|
|LR06|If all the inputs to the AND gate are HIGH then the output should get HIGH. If none or not all inputs to the AND gate are HIGH then a LOW output results.|Completed|
|LR07|If input is HIGH then output should get LOW and if input is LOW then output is HIGH.|Completed|
|LR08|If both the inputs to the XOR gate are same i.e. HIGH or LOW then the output should get LOW. If both the  inputs to the XOR gate are not same then output is  HIGH |Completed|
|LR09|The half adder circuit is able to add two single binary digits and provide the output plus a carry value.|Completed|
|LR10|The half subtractor circuit subtracts the two binary values at its input in order to generate a difference of the two values at its output using a borrow bit if required.|Completed|
|LR011|In the low level requirement, we must have the knowledge of different color bands of resistors and their individual value associated with it.|Completed|
||![bands](https://user-images.githubusercontent.com/89680649/132281898-39fcfcde-3279-4e04-975c-5dae94b4dc66.png)|
|LR012|In NAND if a signal input to a digital system ha gone low which is false only if all its inputs are true ,thus its output is complemented to AND gate . A low output results all input gate is high|Completed|
|LR013|In NOR gate it is represented as complement of the OR gate it behaves according to the truth table.|Completed|
|LR014|In Full adder it performs addition|Completed|
|LR015|Encoder is the dual of binary decoder and it is revers operation of decoder.|Completed|
|LR016|Ripple counter it is special type of asynchronous counter in which the clock pulse ripples through the circuit MOD ripple counter forms by combining 'n' number of flip flop.|Completed|
|LR017|In XNOR gate the output is high only when both the inputs are same and the output is LOW when both the inputs are different.|Completed|
|LR018|In Binary to Octal conversion multipying each bit of binary number with 2 rasied to the power of their corresponding positional weights then the reslut is decimal number and divide the decimal number with 8 note the remainders until the quotients is 0 and now collect the remainders in reverse order resultant is octal number.|Completed|
|LR019|In Binary to hexadecimal multiplying each bit of binary number with 2 raised to the power of their corresponding positional weights then the result is decimal number and multiply decimal number with 16 raised to the power of their corresponding positional weight and add all the products.|Completed|
|LR020|In Octal to Binary conversion multiply each digit in octal number with 8 raised to the power of their corresponding positional weights and all the products.|Completed|
|LR025|In Binary to Gray conversion xor each bit of binary with next binary bit to get all the gray bits starting from msb bit and msb of gray is same as msb of binary.|Completed|
|LR026|In Gray to Binary conversion xor each bit of gray with previous binary out bit  to get all binary bits starting from msb bit and msb of binary same as msb of gray.|Completed|
|LR027|In Binary to Xs3 conversion add 3 to the integer which is converted from input binary to get Xs3 value.|Completed|
|LR028|In 1's Complement conversion convert 0's to 1's and 1's to 0's of binary values which is converted from given integer.|Completed|
|LR029|In Octal to Binary conversion each digit is converted into 3 bit binary data.|Completed|
|LR030|In Hexadecimal to Decimal Conversion multiply each digit in hexadecimal number with 16 raised to the power of their corresponding positional weights and add all the products.|Completed|
|LR031|In Octal to Decimal Conversion multiply each digit in octal number with 8 raised to the power of their corresponding positional weights and add all the products.|Completed|
|LR032|In Decimal to BCD Conversion each digit is converted into 4 bit binary data.|Completed|
|LR033|In BCD to Decimal Conversion we take 4 bits at a time and convert it to decimal .|Completed|
|LR034|determining the output of SR flipflop by giving 2 binary inputs |Completed|
|LR035|determining the output of JK flipflop by giving 2 binary inputs |Completed|
|LR036|determining the output of DeMorgans theorem 1 by giving 2 binary inputs |Completed|
|LR037|determining the output of DeMorgans theorem 2 by giving 2 binary inputs |Completed|
|LR038|A parity check is the process that ensures accurate data transmission between nodes during communication. A parity bit is appended to the original data bits to create an even or odd bit number; the number of bits with value one|Completed|
|LR039|The product of multiplying any binary number x by a single binary digit is always either 0 or x. Therefore, the multiplication of two binary numbers comes down to shifting the multiplicand left appropriately for each non-zero bit in the multiplier, and then adding the shifted numbers together|Completed|
|LR040|Decoder is a combinational circuit that has ‘n’ input lines and maximum of 2n output lines. One of these outputs will be active High based on the combination of inputs present, when the decoder is enabled|Completed|
