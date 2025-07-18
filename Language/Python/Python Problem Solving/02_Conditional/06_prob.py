marks = float(input("Enter Marks: "))

if(marks <= 100 or marks>90):
    print("Excellent")
elif(marks <= 90 or marks>80):
    print("A")
elif(marks <= 80 or marks > 70):
    print("B")
elif(marks <= 70 or marks > 60):
    print("C")
elif(marks <= 60 or marks > 50):
    print("D")
elif(marks <= 50 or marks > 40):
    print("E")
else:
    print("You Have to work Hard you got F grade.")