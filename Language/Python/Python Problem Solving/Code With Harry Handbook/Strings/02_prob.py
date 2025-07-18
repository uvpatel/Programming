# 2. Write a program to fill in a letter template given below with name and date.


letter = '''
Dear <|Name|>,
You are selected!
<|Date|>
'''

Name = input("Enter name: ")
Date = str(input("Enter Date: "))

print( letter.replace("<|Name|>",Name).replace("<|Date|>",Date))