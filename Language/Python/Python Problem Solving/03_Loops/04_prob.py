number = int(input("Enter number: "))

for i in range(1,number):
    if(number == 2):
        print("The given number is prime")
    else: 
        if(number % i == 0):
            print("The given number is not prime")
            break;
        else:
            print("The given number is prime")
            break;