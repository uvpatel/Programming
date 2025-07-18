num1 = float(input("Enter First Number: "))
num2 = float(input("Enter Second Number: "))
num3 = float(input("Enter Third Number: "))
num4 = float(input("Enter Fourth Number: "))

if(num1 == num2 or num2 == num3 or num3 == num4):
    print("Please Enter Unique Number")

if( (num1 > num2) and (num1 > num3) and (num1 > num4)):
    print(f" First Number is biggest among four")

elif( (num2 > num1) and (num2 > num3) and (num2 > num4)):
    print(f" Second Number is biggest among four")

elif( (num3 > num2) and (num3 > num1) and (num3 > num4)):
    print(f" Third Number is biggest among four")

elif( (num4 > num2) and (num4 > num3) and (num4 > num1)):
    print(f" Fourth Number is biggest among four")
else:
    print("something went wrong")