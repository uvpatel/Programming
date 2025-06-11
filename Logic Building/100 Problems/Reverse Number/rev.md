# Problem Concept

> This idea for this approach is to repeatedly extract the last digit of n using the modulus operator (n % 10) and appending it to the reverse number (revNum). After extracting the digit, the number n is reduced by dividing it by 10 (n = n / 10). This process continues until n becomes 0. Finally, the reversed number (revNum) is returned.

# programming logic

1) input number
2) initialise reverse number 0
3) untill n> 0 :
    1) find Remender
    2) reverse = reverse*10 + remender
    3) n /= 10

4) print reverse. 