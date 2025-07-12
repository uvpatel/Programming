Creating NumPy Arrays
Why NumPy Arrays?
NumPy arrays are the core of numerical computing in Python. They are:

Faster than Python lists (C-optimized)
Memory-efficient (store data in a contiguous block)
Support vectorized operations that support SIMD (no slow Python loops)
Used in ML, Data Science, and AI
1. Creating NumPy Arrays
From Python Lists:
import numpy as np
 
arr1 = np.array([1, 2, 3, 4, 5])  # 1D array
arr2 = np.array([[1, 2, 3], [4, 5, 6]])  # 2D array
 
print(arr1)  # [1 2 3 4 5]
print(arr2)  
# [[1 2 3]
#  [4 5 6]]

🔹 Unlike lists, all elements must have the same data type.

Creating Arrays from Scratch:
np.zeros((3, 3))    # 3x3 array of zeros
np.ones((2, 4))     # 2x4 array of ones
np.full((2, 2), 7)  # 2x2 array filled with 7
np.eye(4)           # 4x4 identity matrix
np.arange(1, 10, 2) # [1, 3, 5, 7, 9] (like range)
np.linspace(0, 1, 5) # [0. 0.25 0.5 0.75 1.] (evenly spaced)

Key Takeaway: NumPy offers powerful shortcuts to create arrays without loops!

2. Checking Array Properties
arr = np.array([[10, 20, 30], [40, 50, 60]])
 
print("Shape:", arr.shape)   # (2, 3) → 2 rows, 3 columns
print("Size:", arr.size)     # 6 → total elements
print("Dimensions:", arr.ndim) # 2 → 2D array
print("Data type:", arr.dtype) # int64 (or int32 on Windows)

🔹 NumPy arrays are strongly typed, meaning all elements share the same data type.

3. Changing Data Types
arr = np.array([1, 2, 3], dtype=np.float32)  # Explicit type
print(arr.dtype)  # float32
 
arr_int = arr.astype(np.int32)  # Convert float to int
print(arr_int)  # [1 2 3]

Efficient memory usage by choosing the right data type.
4. Reshaping and Flattening Arrays
arr = np.array([[1, 2, 3], [4, 5, 6]])
print(arr.shape)  # (2, 3)
 
reshaped = arr.reshape((3, 2))  # Change shape
print(reshaped)
# [[1 2]
#  [3 4]
#  [5 6]]
 
flattened = arr.flatten()  # Convert 2D → 1D
print(flattened)  # [1 2 3 4 5 6]