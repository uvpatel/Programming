Multidimensional Indexing and Axis
NumPy allows you to efficiently work with multidimensional arrays, where indexing and axis manipulation play a crucial role. Understanding how indexing works across multiple dimensions is essential for data science and machine learning tasks.

1. Understanding Axes in NumPy
Each dimension in a NumPy array is called an axis. Axes are numbered starting from 0.

For example:

1D array → 1 axis (axis 0)
2D array → 2 axes (axis 0 = rows, axis 1 = columns)
3D array → 3 axes (axis 0 = depth, axis 1 = rows, axis 2 = columns)
Example: Axes in a 2D Array
import numpy as np
 
arr = np.array([[1, 2, 3], 
                [4, 5, 6], 
                [7, 8, 9]])
 
print(arr)

Output:

[[1 2 3]
 [4 5 6]
 [7 8 9]]
Axis 0 (rows) → Operations move down the columns.
Axis 1 (columns) → Operations move across the rows.
Summing along axes:

print(np.sum(arr, axis=0))  # Sum along rows (down each column)
print(np.sum(arr, axis=1))  # Sum along columns (across each row)

Output:

[12 15 18]  # Column-wise sum
[ 6 15 24]  # Row-wise sum
2. Indexing in Multidimensional Arrays
You can access elements using row and column indices.

# Accessing an element
print(arr[1, 2])  # Row index 1, Column index 2 → Output: 6

You can also use slicing to extract parts of an array:

print(arr[0:2, 1:3])  # Extracts first 2 rows and last 2 columns

Output:

[[2 3]
 [5 6]]
3. Indexing in 3D Arrays
For 3D arrays, the first index refers to the "depth" (sheets of data).

arr3D = np.array([[[1, 2, 3], [4, 5, 6]],
                  [[7, 8, 9], [10, 11, 12]]])
 
# Output of arr3D.shape is → (depth, rows, columns)
print(arr3D.shape)  # Output: (2, 2, 3) 

Accessing elements in 3D:
# First sheet, second row, third column
print(arr3D[0, 1, 2])  # Output: 6
 
print(arr3D[:, 0, :])   # Get the first row from both sheets

4. Practical Example: Selecting Data Along Axes
# Get all rows of the first column
first_col = arr[:, 0]
print(first_col)  # Output: [1 4 7]

# Get the first row from each "sheet" in a 3D array
first_rows = arr3D[:, 0, :]
print(first_rows)

Output:

[[ 1  2  3]
 [ 7  8  9]]
5. Changing Data Along an Axis
# Replace all elements in column 1 with 0
arr[:, 1] = 0
print(arr)

Output:

[[1 0 3]
 [4 0 6]
 [7 0 9]]
6. Summary
Axis 0 = rows (vertical movement), Axis 1 = columns (horizontal movement)
Indexing works as arr[row, column] for 2D arrays and arr[depth, row, column] for 3D arrays
Slicing allows extracting subarrays
Operations along axes help efficiently manipulate data without loops