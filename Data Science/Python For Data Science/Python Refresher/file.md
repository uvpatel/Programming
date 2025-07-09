File Handling
File handling allows Python programs to read, write, and manipulate files stored on disk. Python provides built-in functions for working with files.

Opening a File
Python uses the open() function to open a file.

Syntax
file = open("filename", mode)

filename → The name of the file to open.
mode → Specifies how the file should be opened.
File Modes
Mode	Description
'r'	Read (default) – Opens file for reading, raises an error if file does not exist.
'w'	Write – Opens file for writing, creates a new file if not found, and overwrites existing content.
'a'	Append – Opens file for writing, creates a new file if not found, and appends content instead of overwriting.
'x'	Create – Creates a new file, but fails if the file already exists.
'b'	Binary mode – Used with rb, wb, ab, etc., for working with non-text files (e.g., images, PDFs).
't'	Text mode (default) – Used for text files (e.g., rt, wt).
Reading Files
Using read() – Read Entire File
file = open("example.txt", "r")
content = file.read()
print(content)
file.close()  # Always close the file after use

Using readline() – Read Line by Line
file = open("example.txt", "r")
line1 = file.readline()  # Reads first line
print(line1)
file.close()

Using readlines() – Read All Lines as List
file = open("example.txt", "r")
lines = file.readlines()  # Reads all lines into a list
print(lines)
file.close()

Writing to Files
Using write() – Overwrites Existing Content
file = open("example.txt", "w")  # Opens file in write mode
file.write("Hello, World!")  # Writes content
file.close()

Using writelines() – Write Multiple Lines
lines = ["Hello\n", "Welcome to Python\n", "File Handling\n"]
 
file = open("example.txt", "w")
file.writelines(lines)  # Writes multiple lines
file.close()

Appending to a File
The a (append) mode is used to add content to an existing file without erasing previous data.

file = open("example.txt", "a")
file.write("\nThis is an additional line.")
file.close()

Using with Statement (Best Practice)
Using with open() ensures the file is automatically closed after execution.

with open("example.txt", "r") as file:
    content = file.read()
    print(content)  # No need to manually close the file

Checking if a File Exists
Use the os module to check if a file exists before opening it.

import os
 
if os.path.exists("example.txt"):
    print("File exists!")
else:
    print("File not found!")

Deleting a File
Use the os module to delete a file.

import os
 
if os.path.exists("example.txt"):
    os.remove("example.txt")
    print("File deleted.")
else:
    print("File does not exist.")

Working with Binary Files
Binary files (.jpg, .png, .pdf, etc.) should be opened in binary mode ('b').

Reading a Binary File
with open("image.jpg", "rb") as file:
    data = file.read()
    print(data)  # Outputs binary content

Writing to a Binary File
with open("new_image.jpg", "wb") as file:
    file.write(data)  # Writes binary content to a new file

Summary of File Operations
Operation	Description	Example
Open file	Open a file	file = open("example.txt", "r")
Read file	Read all content	file.read()
Read line	Read one line	file.readline()
Read lines	Read all lines into list	file.readlines()
Write file	Write content (overwrite)	file.write("Hello")
Append file	Add content to the end	file.write("\nMore text")
Check file existence	Check before opening/deleting	os.path.exists("file.txt")
Delete file	Remove a file	os.remove("file.txt")
Resources