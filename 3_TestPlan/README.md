# Test Plan
## Test plan for Minterm,Maxterm,SOP,POS and Boolean Laws

| **Test ID** | **Description**                                              | **Explaination**      | **Expected OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------     |-------------|----------------|------------------|
|  H_01       |  High level test plans for all the below low level test plans|if inputs are either 0 or 1 then only it will be get into the loop for execution or else it will return 0 input a=5,input b=6 so it will return the output as 0 |0|0|Requirement based |
|  L_01       |  Minterm Functionality| input a=1 and b=1 then output Y=1 because Y=a*b |1|1|Requirement based |
|  L_02       |  Maxterm Functionality| input a=1 and b=1 then output Y=0 because Y=~(a)*(~b) |0|0|Requirement based |
|  L_03       |  Sum Of Product| input a=1 and b=1 then output Y=1 because Y=b+(a*~(b)) |1|1|Requirement based |
|  L_04       |  Product Of Sum| input a=1 and b=1 then output Y=1 because Y=(a*(~b)+b) |1|1|Requirement based |
|  L_05       |  Associative Law| input a=1 and b=1 and c=1 then output Y=1 because Y=1 only when the condition is true associative law for this is (A+(B+C))=((A+B)+C) |1|1|Requirement based |
|  L_06       |  Distributive Law| input a=1 and b=1 and c=1 then output Y=1 because Y=1 only when the condition is true associative law for this is (A+(B+C))=((A+B)+C) |1|1|Requirement based |
|  L_07       |  Commutative Law| input a=1 and b=1 then output Y=1 because Y=1 only when the condition is true Commutative law for this is (A+B)=(B+A) |1|1|Requirement based |
|  L_08       |  Absorption Law| input a=1 and b=1 then output Y=1 because Y=0 only when the condition is true Absorption law for this is (A+(A*B))=A|0|0|Requirement based |



## Test plan for Number Base Conversions

| **Test ID** | **Description**                                              | **Explaination**      | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----------------------|-------------|----------------|------------------|
|  L_01       | Decimal to Binary Conversion  | Decimal number= (152.25)10 Divide the number 152 and its successive quotients with base 2.Now, perform the multiplication of 0.25 and successive fraction with base 2.|(152)10=(10011000.01)2|(152)10=(10011000.01)2|Requirement based |
|  L_02       | Decimal to Octal Conversion| Decimal number=(152.25)10 Divide the number 152 and its successive quotients with base 8.Now perform the multiplication of 0.25 and successive fraction with base 8.|(152)10=(230.2)8|(152)10=(230.2)8|Requirement based |
|  L_03       | Decimal to hexadecimal conversion| Divide the number 152 and its successive quotients with base 16.Now perform the multiplication of 0.25 and successive fraction with base 16.|(152)10=(98.4)16|(152)10=(98.4)16|Requirement based |
|  L_04       | Binary to Decimal Conversion|  The process starts from multiplying the bits of binary number with its corresponding positional weights. And lastly, we add all those products.Example: (10110.001)2 |(22.125 )10|(10110.001)2=(22.125 )10|Requirement based |
|  L_05       | Decimal to Roman Numbers Conversion| Find largest decimal number r <= decimal number num and subtract num=num-r. Repeat until num =0. |2020=mmxx|2020=mmxx|Requirement based |
|  L_06       | Octal to Binary Conversion|  input a=88 then Y=111111 because (8)10=(111)2|111111|111111|Requirement based |
|  L_07       | Hexadecimal to Decimal Conversion|  input a=124 then Y=292 because multiplying the digits of 124 with 16 raised to the power of their corresponding positional weights and adding all those products|292|292|Requirement based |
|  L_08       | Octal to Decimal Conversion|  input a=214 then Y=140 because multiplying the digits of 214 with 8 raised to the power of their corresponding positional weights and adding all those products|140|140|Requirement based |
|  L_09       | Decimal to BCD Conversion|  input a=32 then Y=00110010 because 3=0011,2=0010|110010|110010|Requirement based |
|  L_10       | BCD to Decimal Conversion|  input a=10000011 then Y=83 because 1000=8,0011=3|83|83|Requirement based|


## Test plan for NAND,NOR,Fulladder,Encoder,Ripplecounter

| **Test ID** | **Description**                                              | **Explaination**      | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----------------------|-------------|----------------|------------------|
|  L_01       | NAND gate  | It help detect if a single inpute to a digital system has gone low which is false only if all its inputs are true,thus its output is complement to AND gate.a low output results all input gate is high|1 NOR 0 = 0 0 NOR 1 = 0 1 NOR 1 = 0 0 NOR 0 = 1 1 NOR 0 = 0|1 NOR 0 = 0 0 NOR 1 = 0 1 NOR 1 = 0 0 NOR 0 = 1 1 NOR 0 = 0|Requirement based |
|  L_02       | NOR gate| It is a digital logic gate and it behaves according to the truth table.it is represented as complement of the OR operation and it is used to construct the basic gates similar to AND gate|1 NOR 0 = 0 0 NOR 1 = 0 1 NOR 1 = 0 0 NOR 0 = 1 1 NOR 0 = 0|1 NOR 0 = 0 0 NOR 1 = 0 1 NOR 1 = 0 0 NOR 0 = 1 1 NOR 0 = 0|Requirement based |
|  L_03       | Full adder| it is a didital circuit that perform addition.it is implemented with logic gates in hardware|A B Cin S Cout 0 0 0|0 0 0 0 1|1 0 0 1 0|1 0 0 1 1|0 1 1  0 0|1 0 1 0 1|0 1 1 1 0|0 1 1 1 1|1 1|A B Cin S Cout 0 0 0|0 0 0 0 1|1 0 0 1 0|1 0 0 1 1|0 1 1 0 0|1 0 1 0 1|0 1 1 1 0|0 1 1 1 1 1 1|Requirement based |
|  L_04       | Encoder|it divides the given two input to four outputs each output has the corresponding K-Map equation in order to achieve the output|1101|1101|Requirement based |
|  L_05       | Ripple counter|It is a special type of asynchronous counter in which the clock pulse ripples through the circuit MOD ripple counter forms by combining n number of  flip flops |       |       |Requirement based|



## Test plan for AND GATE,NOT GATE,XOR GATE,HALF ADDER,HALF SUBRACTOR

|Test ID| Description| Input| Expected OUT |  Actual Out | Type Of Test |                               
|:--:|:--:|:--:|:--:|:--:|:--:|
|H01|Every logic in Low level test plan should execute only for 0 and 1 as input.|a=3 b=1|Invalid|Invalid|Requirement based|
|H02|Giving inputs as char type to XOR gate logic|a=x b=c|Invalid|Invalid|Requirement based|
|L01|**AND GATE**:A HIGH output results only if all the inputs to the AND gate are HIGH. If none or not all inputs to the AND gate are HIGH, a LOW output results.| a=0 b=1|0|0|Requirement based|
|L02|**NOT GATE**:A NOT gate always have high or logical 1 output when its input is low or logical 0. On the other hand a logical NOT gate always have low or logical 0 output when input is high or logical 1.|a=1|0|0|Requirement based|
|L03|**XOR GATE**:It gives the true output when the true inputs number is odd and gives a false value when the true input number is not odd that means if inputs are not the same, the output is true; otherwise, false.| a=0 b=1|1|1|Requirement based|
|L04|**HALF ADDER**:The half adder is able to add two single binary digits and provide the output plus a carry value.| a=1 b=1| 0 1|0 1|Requirement based|
|L05|**HALF SUBRACTOR**:It subtracts the two binary values at its input in order to generate a difference of the two values at its output using a borrow bit if required.| a=0 b=1|1 1|1 1|Requirement based|

## Test plan for calculate resistor band, series, parallel

|**Test ID**|	**Description**|	**Exp I/P**|	**Exp O/P**|	**Actual Out**|	**Type Of Test**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Calculate the Total Parallel resistance when all the 3 resistor values are given as input| 68000,4700,560000|Total Parallel Resistance=4361.906738 ohm|Total Parallel Resistance=4361.906738 ohm|Requirement based |
|  H_02       |Calculate the Total Series resistance when less than 3 resistor values are given as input |68000,0,4700|Total Series resistance=72700.00 ohm|Total Series resistance=72700.00 ohm|Scenario based    |
|  H_03       |Calculate Resistance based on color code|5,11,10,2,10|Invalid Input|Invalid Input|Boundary based    |
|  L_01         |Calculate Resistance based on voltage and current(Current=0)|  12,0 |Invalid input:ampere |Invalid input:ampere |Scenario based |
|  L_02         |Calculate Resistance based on color code|  10,8,0,2,0 |Invalid Input|Invalid Input|Scenario based |


## Test plan for Number conversions

|**Test ID**|	**Description**| **Explanation** |	**Exp I/P**|	**Exp O/P**|	**Actual Out**|	**Type Of Test**|
|-------------|--------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | High level test plan for below low level test plans L_1,2,3 | If the inputs are either 0 or 1 then only it will get into the loop for execution or else it will return 0.Input is 3 so it will return output as 0| 3 | 0 | 0 | Requirement based |
| H_02        | High level test plan for below low level test plan L_4 | If the inputs are integer then only it will get into the loop for execution or else it will return 0.Input If input is 3 so it will execute | 3 | 4 | 4 | Requirement based |
|  L_01       | Binary to Gray code | Calculate the Gray code for the input binary code by performing exor operations |11|10|10| Requirement based |
|  L_02       | Gray code to Binary | Calculate the Binary for the input gray code by performing exor operations | 101 | 111 | 111 | Requirement based |
|  L_03       | Binary to Excess-3 | Calculate the Excess-3 code for the given binary by adding 3 to the decimal which is converted from given binary | 000 | 111 | 111 | Requirement based |
|  L_04       | 1's complement | Calculate the 1's complement for the binary which is converted from given integer by converting 0->1 and 1->0 | 26 | 5 | 5 | Requirement based|


## Test plan jk Flipflop

|**Test ID**|	**Description**|	**Exp I/P**|	**Exp O/P**|	**Actual Out**|	**Type Of Test**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |to find the output of jk Flipflop|0 0|0|0|Requirement based|
|  L_02       |to find the output of jk Flipflop|0 1|0|0|Requirement based|
|  L_03       |to find the output of jk Flipflop|1 0|1|1|Requirement based|
|  L_04       |to find the output of jk Flipflop|1 1|0|0|Requirement based|
## Test plan SR Flipflop

|**Test ID**|	**Description**|	**Exp I/P**|	**Exp O/P**|	**Actual Out**|	**Type Of Test**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |to find the output of SR Flipflop|0 0|0|0|Requirement based|
|  L_02       |to find the output of SR Flipflop|0 1|0|0|Requirement based|
|  L_03       |to find the output of SR Flipflop|1 0|1|1|Requirement based|
|  L_04       |to find the output of SR Flipflop|1 1|0|0|Requirement based|
## Test plan for Demorgans 1st Theroem

|**Test ID**|	**Description**|	**Exp I/P**|	**Exp O/P**|	**Actual Out**|	**Type Of Test**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |to find the output of Demorgans 1st Theroem|0 0|1|1|Requirement based|
|  L_02       |to find the output of Demorgans 1st Theroem|0 1|1|1|Requirement based|
|  L_03       |to find the output of Demorgans 1st Theroem|1 0|1|1|Requirement based|
|  L_04       |to find the output of Demorgans 1st Theroem|1 1|0|0|Requirement based|
## Test plan for Demorgans 2nd Theroem

|**Test ID**|	**Description**|	**Exp I/P**|	**Exp O/P**|	**Actual Out**|	**Type Of Test**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |to find the output of Demorgans 2nd Theroem|0 0|0|0|Requirement based|
|  L_02       |to find the output of Demorgans 2nd Theroem|0 1|0|0|Requirement based|
|  L_03       |to find the output of Demorgans 2nd Theroem|1 0|0|0|Requirement based|
|  L_04       |to find the output of Demorgans 2nd Theroem|1 1|1|1|Requirement based|

## Test plan for parity check

|**Test ID**|	**Description**|	**Exp I/P**|	**Exp O/P**|	**Actual Out**|	**Type Of Test**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |To verify weither the given input is integer or not ,if it is false then invalid will be given as output|Abcd|invalid|invalid|Requirement based| 
|  L_01       |to check either even parity or odd parity  |101101|1|1|Requirement based|
|  L_02       |to check either even parity or odd parity  |110011|1|1|Requirement based|
|  L_03       |to check either even parity or odd parity  |100011|0|0|Requirement based|
|  L_04       |to check either even parity or odd parity  |111101|0|0|Requirement based|

### Test plan for XNOR Gate, Binary to octal conversion,Binary to Hexadecimal conversion,Octal to binary conversion

| **Test ID** | **Description**                                              | **Explaination**      | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----------------------|-------------|----------------|------------------|
|  L_01       | XNOR gate | XNOR gate is a digital logic gate with two inputs and one output.The output is HIGH when both inputs are same.|0 XNOR 0 =1 0 XNOR 1=0 1 XNOR 0= 0 1X XNOR 1= 1|0 XNOR 0 =1 0 XNOR 1= 0  1 XNOR 0=0 1XNOR 1= 1|Requirement based |
|  L_02       | Binary to Octal Conversion| Multiply each bit with 2 raised to the power of their corresponding positional weights and the result is decimal number and multiplr decimal number with  8 and add all the products.|(1010101)2=(125)8|(1010101)2=(125)8|Requirement based |
|  L_03       | Binary to Hexadecimal conversion| Multiply each bit with 2 raised to the power of their corresponding positional weights and result is decimal number and multiply it with 16 and add all the products.|(0101)2=(5)16|(0101)2=(5)16|Requirement based |
|  L_04       | Octal to Binary Conversion| multiply each digit with 8 raised to the power of their corresponding positional weights and add all the products. |(377)8=(11111111)2|(377)8=(11111111)2|Requirement based |
