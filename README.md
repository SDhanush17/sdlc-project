# Applied_SDLC-Sept_Team_13
## Digital Trainer Kit

The digital Trainer Kit is designed and developed to know the functionality of the Digital Electronic Circuits.Basically it contains all the basic operations in digital electronics like Gates, Boolean functions, Code Conversions, Combinational Logic, Magnitude Comparators, Boolean laws and etc.

## Badges
|Build|Cpp Check|Unit Testing|Valgrind|Git Inspector|
|:--:|:--:|:--:|:--:|:--:|
|[![C/C++ CI](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/build.yml/badge.svg)](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/build.yml) |[![cppcheck-action](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/cppcheck.yml)| [![Unit testing](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/Unit-Test.yml/badge.svg)](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/Unit-Test.yml)|[![CodeQuality - Valgrind](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/Valgrind.yml/badge.svg)](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/Valgrind.yml) |[![Git Inspector](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/Git-Inspector.yml/badge.svg)](https://github.com/GENESIS2021Q1/Applied_SDLC-Sept_Team_13/actions/workflows/Git-Inspector.yml) |

## Folder Structure
|Folder |  Description   |
|-------|---------|
|`1_Requirements`|Documents Detailing Requirements and Research|
|`2_Design`|Document specifying design details|
|`3_TestPlan`|Documents with the Test Plans and Procedures|
|`4_Implementation`|All Source Codes and Documentation|
|`5_Images and Videos`|Execution Output and Results|

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
### Boolean Laws
### Distributive Law
- The Distributive Law says that multiplying a number by a group of numbers added together is the same as doing each multiplication separately.
### Commutative Law
- The definition of commutative law states that when we add or multiply two numbers then the resultant value remains the same, even if we change the position of the two numbers.
### Absorption Law
- Absorption law involves in linking of a pair of binary operations.
### DeMorgans theroems
### 1st theroem
DeMorgan’s First theorem proves that when two (or more) input variables are AND’ed and negated, they are equivalent to the OR of the complements of the individual variables. Thus the equivalent of the NAND function will be a negative-OR function, proving that A.B = A+B. We can show this operation using the following table.
### 2nd theroem
DeMorgan’s Second theorem proves that when two (or more) input variables are OR’ed and negated, they are equivalent to the AND of the complements of the individual variables. Thus the equivalent of the NOR function is a negative-AND function proving that A+B = A.B, and again we can show operation this using the following truth table.
### Flipflops
A flip flop is an electronic circuit with two stable states that can be used to store binary data. The stored data can be changed by applying varying inputs. Flip-flops and latches are fundamental building blocks of digital electronics systems used in computers, communications, and many other types of systems
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
### Ripple counter
Ripple counter is a special type of Asynchronous counter in which the clock pulse ripples through the circuit.
### Binary to Gray code
Binary to Gray code is used to convert the binary code into its equivalent Gray code. By putting the MSB of 1 below the axis and the MSB of 1 above the axis and reflecting the (n-1) bit code about an axis after 2n-1 rows, we can obtain the n-bit gray code.
### Gray code to Binary
Gray code to Binary is used to convert the gray code into its equivalent Binary code. It is a sequence of binary number systems, which is also known as reflected binary code. The reason for calling this code as reflected binary code is the first N/2 values compared with those of the last N/2 values in reverse order. In this two consecutive values are differed by one bit of binary digits.
### Binary to Excess-3
The excess-3 code plays an important role in representing the decimal numbers. The Excess-3 code can also be represented as the XS-3 code. In this each digit of the decimal number is represented by adding 3 in each decimal digit.
### 1's Complement
The complement is used for representing the negative decimal number in binary form. Different types of complement are possible of the binary number, but 1's and 2's complements are mostly used for binary numbers. We can find the 1's complement of the binary number by simply inverting the given number like 1's complement of binary number 1011001 is 0100110.
### XNOR gate
The XNOR gate is a digital logic gate whose function is the logical complement of the exclusive OR gate .The xnor gate has two inputs and one output the output is true when both the inputs are same
### Binary to octal conversion
 Group all the 0's and 1's in the binary number as a set of three starting from the right side  add 0's to left if it doesn't form a group of three .make sure each group must have three numbers then the resultant is the octal number.
### Binary to Hexadecimal conversion
Group all 0's and 1's in the binary number as a set of four starting from the right side add 0's to left if it does't form group of four .male surre each group must have four numbers then the result is the hexadecimal number.
### Octal to binary conversion
convert each octal digit to its 3 digit binary representation then combine the binary representation.
 
 ## Contributors List and Summary
|PS no. |  Name   |    Features    |
|-------|---------|----------------|
| `99006257` | `Sanjay Netagal` | `Minterm,Maxterm,Sum Of Products,Products Of Sum and Boolean Laws` |  
| `40018603` | `Kodidasu Avinash` | `4_2encoder,2_4decoder,Bitwise multiplication,parity check,4_1 multiplexer` |  
| `40018601` | `Ballani Venkata Bhagya Suresh Kumar` | `Binary to Gray Code, Gray Code to Binary, Binary to Excess-3 and 1's Complement` |  
| `40018624` | `Prajwala H C` | `NAND gate,NOR gate,full adder, encoder, ripple counter` |  
| `40018600` | `Avunuri  Manasa` | `Xnor gate , Binary to Octal,Binary to Hexadecimal,Octal to Binary` |  
| `40018789` | `Rajamahendravarapu Daneswara Rao` | `Total Series, Total Parallel, Resistor band calculator, calculated Resistor value` |  
| `40019079` | `Ponnoju Nagashirisha` | `and_gate,not_gate,xor_gate,half_adder,half_subractor` |  
| `40019075` | `Rajarajeshwari Chanda` | `bcd_decimal,decimal_bcd,octal_binary,octal_decimal, hexadecimal_decimal` |  
| `40019073` |`Pavan Kalyan Medishetty ` | `decimal_binary,decimal_octal,decimal_roman, binary_decimal` |
| `40018681` |`Maddila Murali Krishna ` | `srflipflop,jkflipflop,demorgans1,demorgans2` |
