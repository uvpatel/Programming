number = int(input("Enter number you want sum of: "))


# Procigral Approach
# sum = 0

# for i in range(1,number+1):
#     sum += i

# print(f"The sume of {number} is {sum},using Procigral")

# functional Approach

# def sum_of_n(n):
#     sum_ = 0
#     for i in range(1,number+1):
#         sum_ += i
#     print(f"The sum of {number} is {sum_}, using function")

# # function Call


# sum_of_n(number)


# Recursive Approach

def sum_n(m):
    # Base condition
    if m == 0 or m == 1:
        return m
    else:
        return m + sum_n(m-1)
    
print(f"The sume of {number} is {sum_n(number)}, using recursion")


print(f"The sume of {number} is {(number*(number+1))/2}, using Formula based Method")

