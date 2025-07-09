If else Conditionals & Functions in Python
In Python, conditional statements (if, elif, and else) are used to control the flow of a program based on conditions. These are essential in data science for handling different scenarios in data processing, decision-making, and logic execution.

Basic if Statement
The if statement allows you to execute a block of code only if a condition is True.

x = 10
if x > 5:
    print("x is greater than 5")

Explanation:
The condition x > 5 is checked.
If True, the indented block under if runs.
If False, nothing happens.
if-else Statement
The else block executes when the if condition is False.

x = 3
if x > 5:
    print("x is greater than 5")
else:
    print("x is not greater than 5")

Explanation:
If x > 5, it prints the first message.
Otherwise, the else block executes.
if-elif-else Statement
When multiple conditions need to be checked sequentially, use elif (short for "else if").

x = 5
if x > 10:
    print("x is greater than 10")
elif x > 5:
    print("x is greater than 5 but not more than 10")
elif x == 5:
    print("x is exactly 5")
else:
    print("x is less than 5")

Explanation:
The conditions are checked from top to bottom.
The first True condition executes, and the rest are skipped.
Using if-else in Data Science
Conditional statements are widely used in data science for filtering, cleaning, and decision-making.

Example: Categorizing Data
age = 25
if age < 18:
    category = "Minor"
elif age < 65:
    category = "Adult"
else:
    category = "Senior Citizen"
 
print("Category:", category)

Example: Applying Conditions on Pandas DataFrame
import pandas as pd
 
data = {'Name': ['Alice', 'Bob', 'Charlie'], 'Score': [85, 40, 75]}
df = pd.DataFrame(data)
 
df['Result'] = df['Score'].apply(lambda x: 'Pass' if x >= 50 else 'Fail')
print(df)

Summary
if: Executes if the condition is True.
if-else: Adds an alternative block if the condition is False.
if-elif-else: Handles multiple conditions.
Useful in data science for logic-based decision-making.