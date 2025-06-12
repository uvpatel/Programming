number = int(input("Enter Number: "))

# Procigral Approach
# for i in range(1,11):
#     print(f"{number} x {i} = {number*i}")

# Functional Approach

def multy_table(n):
    for i in range(1,11):
        print(f"{n} x {i} = {n*i}")
    return n*i

print(multy_table(number))