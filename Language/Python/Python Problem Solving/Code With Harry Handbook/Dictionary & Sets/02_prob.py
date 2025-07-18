list = []

n = int(input("Enter Elements Number: "))

for i in range(n):
    num = int(input("Enter number: "))
    list.append(num)


a  = set(list)

print(a)