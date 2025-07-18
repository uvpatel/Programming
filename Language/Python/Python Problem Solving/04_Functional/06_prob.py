def inch_cms(inch):
    return 0.393701*inch

inch = float(input("Enter number: "))

print(f"The centimeter of {inch_cms(inch)} of {inch} inches.")
