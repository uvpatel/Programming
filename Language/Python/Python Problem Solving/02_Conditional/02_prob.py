# import emojis 
maths = float(input("Enter Math's Marks: "))
physics = float(input("Enter Physics Marks: "))
chemestry = float(input("Enter Chemestry Marks: "))

average = (maths + physics + chemestry)/3

if (average > 40 and maths > 33 and chemestry > 33 and physics > 33 ):
   print("Congraturalation🎉! You are Pass")
else:
   print("You Failed the exam.better luck next time.👍")
