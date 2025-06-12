number = int(input("Enter number: "))

sum_of_squre = 0


# [Naive Approach] - Adding One By One - O(n) Time and O(1) Space

for i in range(1,number+1):
    sum_of_squre += (number*number)*i

