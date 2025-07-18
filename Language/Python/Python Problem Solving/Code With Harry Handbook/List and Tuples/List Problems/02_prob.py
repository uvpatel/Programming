marks = []
n = int(input("Enter how many Studen's Marks you want to strore: "))


for i in range(n):
    m = int(input(f"Enter Marks at index {i}: "))
    marks.append(m)

# marks.sort() decending
marks.sort(reverse=True) # acending

print(marks)
