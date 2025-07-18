sum_n = 0
def sum_of_n(number):
    if number == 0 or number == 1:
        return number
    
    return sum_of_n(number-1)+ number

number = int(input("Enter Number: "))
print(f"The sum of given {number} is {sum_of_n(number)}")