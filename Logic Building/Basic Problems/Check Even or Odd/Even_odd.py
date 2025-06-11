# Procigaral approach

# n = int(input("Enter Number: "))

# if(n % 2 == 0):
#     print(f"The Given number {n} is even")

# elif(n % 2 != 0):
#     print(f"The Given number {n} is odd")

# else:
#     print("Something Went Wrong")


# Functional Approach

def isEven(n):
    if n%2 ==0 :
        return True
    else:
        return False
    
m = int(input("Enter number: "))

print("The Given number is Even or Not (if true return true else false)",isEven(m))
