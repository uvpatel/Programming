# Binary Number System

- How Data is stored in Memory?

### till now in math : Decimal Number system
- Basically how many digit you using . in decimal (0 - 9 (10 digit) - Dec- Dicimal) base 10

- But computer knows only 0's and 1's so We use binary number(base 2) system there is other also like Haxadecimal(16 digit)(base 16), octal (8 digit)(base 8).



## Convertion of Decimal to Binary

- for e.g 42 - repeted division with 2.

- 2 | 42  0           |     2 | 50  0
- 2 | 21  1           |     2 | 25  1
- 2 | 10  0           |     2 | 12  0
- 2 | 5   1           |     2 | 6   0
- 2 | 2   0           |     2 | 3   1
- 2 | 1   1           |     2 | 1   1
-   | 0   0           |       | 0   0

- (42)10 = (101010)2
- (50)10 = (101010)2


| Decimal | Division Steps                                                                                                    | Binary (Bottom to Top) |
| ------- | ----------------------------------------------------------------------------------------------------------------- | ---------------------- |
| 1       | 1 ÷ 2 = 0 remainder **1**                                                                                         | `1`                    |
| 2       | 2 ÷ 2 = 1 remainder **0**<br>1 ÷ 2 = 0 remainder **1**                                                            | `10`                   |
| 3       | 3 ÷ 2 = 1 remainder **1**<br>1 ÷ 2 = 0 remainder **1**                                                            | `11`                   |
| 4       | 4 ÷ 2 = 2 remainder **0**<br>2 ÷ 2 = 1 remainder **0**<br>1 ÷ 2 = 0 remainder **1**                               | `100`                  |
| 5       | 5 ÷ 2 = 2 remainder **1**<br>2 ÷ 2 = 1 remainder **0**<br>1 ÷ 2 = 0 remainder **1**                               | `101`                  |
| 6       | 6 ÷ 2 = 3 remainder **0**<br>3 ÷ 2 = 1 remainder **1**<br>1 ÷ 2 = 0 remainder **1**                               | `110`                  |
| 7       | 7 ÷ 2 = 3 remainder **1**<br>3 ÷ 2 = 1 remainder **1**<br>1 ÷ 2 = 0 remainder **1**                               | `111`                  |
| 8       | 8 ÷ 2 = 4 remainder **0**<br>4 ÷ 2 = 2 remainder **0**<br>2 ÷ 2 = 1 remainder **0**<br>1 ÷ 2 = 0 remainder **1**  | `1000`                 |
| 9       | 9 ÷ 2 = 4 remainder **1**<br>4 ÷ 2 = 2 remainder **0**<br>2 ÷ 2 = 1 remainder **0**<br>1 ÷ 2 = 0 remainder **1**  | `1001`                 |
| 10      | 10 ÷ 2 = 5 remainder **0**<br>5 ÷ 2 = 2 remainder **1**<br>2 ÷ 2 = 1 remainder **0**<br>1 ÷ 2 = 0 remainder **1** | `1010`                 |



## Decimal to Binary
` Logic code`

1) decNum answer  // binNum
2) while(decNum > 0 ){
3) int rem = rem % 2;  // for remender
4) decNum = decNum / 2;   // for Quetionat.
5) ans += rem*power -> backward calculate. 
6) pow = pow*10
 } ans 

- we add  0 <- 1
- we mulyply 10 to power form convert. 
- 101  <- 1*100 + 0*10 + 1*1
- 102  <- 1*100 + 0*10 + 1*1

- for e.g n = 5. 
power variable
2  |  5     -> 1*10^0  = 1
2  |  2     -> 1*10^1  = 0
2  |  1     -> 1*10^2  = 0
   |  0   


## Binary to Decimal

- 10 10 10 <- 2pow multiply and add.


- For 50:
- 2^5 + 2^4 + 2^3 + 2^2 + 2^1 => 50*/

- convert 1 1 0 0 1 0 1 into Decimal
- -> 2^7 + 2^6 + 2^ 3+ 2^1  -> 128 + 56 + 8 +2 ->194
-  194

## Common Number

- 0 --> 00
- 1 --> 01
- 2 --> 10
- 3 --> 11
- 4 --> 100
- 5 --> 101
- 6 --> 110
- 7 --> 111
- 8 --> 1000
- 9 --> 1001
- 10 --> 1010

## Trick for finding 
- find number which are the basically make a sum. and fullfill the place.
- in odd last bit will be 1.because number is odd.

## sum of two bits.
-  0 + 0 -> 0
-  0 + 1 -> 1
-  1 + 0 -> 1
-  1 + 1 -> 10

- or if there is 1 more it will be carry out.

## two's Complement

- int n = 10 -> 1010
- 4Bytes = 32bits.
- 0 0 ..... 1 0 1 0 -> 32 spaces.

### How to find 2's Complement.

1) convert decimal into binary.
2) Prefix with 0 -> it is ms (most significant bit -> 0 shows +ve and 1 shows -ve.)
3) 1's Complement we reverse each bit change 0 -> 1 and 1-> 0.


---

1) 10 -> 1010
2) 01010
3) 10101 +1
4) 10110 -> msb = 1 so it is negative is two's compliment.


---

Qs. int n = 8;

1) 11000
2) 01000 +1
3) 11000
4) 00111 -> 8
---
Qs. int n = -12;

1) 11000
2) 01000 +1
3) 11000
4) 00111 -> 8
---

summry
- bin -> Dec + code
- Dec -> bin + code
- Common -> trick
- add binary
- 2's Comp / 1's Comp
---

### Operator Precedence (Priority like maths' Bodmas concept. )
- which operation will be perform first.

| Operators                 | Precedence Order | Associativity |
|--------------------------|------------------|---------------|
| `!`, `+`, `-` (unary)    | First            | Right to Left |
| `*`, `/`, `%`            | Second           | Left to Right |
| `+`, `-`                 | Third            | Left to Right |
| `<`, `<=`, `>=`, `>`     | Fourth           | Left to Right |
| `==`, `!=`               | Fifth            | Left to Right |
| `&&`                     | Sixth            | Left to Right |
| `||`                     | Seventh          | Left to Right |
| `=`                      | Last             | Right to Left |

### Not for interview.

#### Summary:
- ! and unary will be execute in a first place. a++ * 5 -> first ++ will be executed. 


## Scope
- Scope is concept is gennerally for variable, at which area and code of block where it will be used.
- Types of Scope :
1) Local 
- if-else + loop, functions, block of code.

2) Global
- 




- **Real World Application** -> in Frontednd calls API ( Application Programming Interface ) if we wamt to call it we should have api for authentication and we can decalre globally it not a good practise. we always should use .env file.


## Data Type Modifiers.
- Change meaning of data types
- int x Bytes => 32 bits. we can fill this 32 bit 2 ^ 32 possiblities to store the bits.
- 0 to 2^31 - 1. we can modify  the capacity.

- long >= 4Bytes long int.
- short
- long long
- signed
- unsigned

**Note** - Bydefualt int and all are signed they can store +ve and -ve values. but we can change it.

**Use** - Unsigned when we store large amount of customers id's so they will be unsigned. or banking system.

- because it will be not use msb. so unsigned negetive will be stored into +ve. capacity not change but for negative spaces are allocated for positive number.


## Summery
- op precedence
- scope
- datatype modifiers - signedm unsigned , range.


## Home work
- Figure out how to find if a number is power of 2 without any loop.
- ip n = 32 return true because it will be done 
- use bitwise left or right.
- WAF to reverse an Integer n.
