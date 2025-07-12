Indexing and slicing
Lets now learn about indexing and slicing in Numpy

Indexing (Same as Python Lists)
arr = np.array([10, 20, 30, 40])
print(arr[0])  # 10
print(arr[-1]) # 40

Slicing (Extracting Parts of an Array)
arr = np.array([10, 20, 30, 40, 50])
 
print(arr[1:4])  # [20 30 40] (slice from index 1 to 3)
print(arr[:3])   # [10 20 30] (first 3 elements)
print(arr[::2])  # [10 30 50] (every 2nd element)

Slicing returns a view, not a copy! Changes affect the original array.**
This might seem counterintuitive since Python lists create copies when sliced. But in NumPy, slicing returns a view of the original array. Both the sliced array and the original array share the same data in memory, so changes in the slice affect the original array.

Why does this happen?

Memory Efficiency: Avoids unnecessary copies, making operations faster and saving memory.
Performance: Enables faster access and manipulation of large datasets without duplicating data.
sliced = arr[1:4]
sliced[0] = 999
print(arr)  # [10 999 30 40 50]

Use .copy() if you need an independent copy.
6. Fancy Indexing & Boolean Masking
Fancy Indexing (Select Multiple Elements)
arr = np.array([10, 20, 30, 40, 50])
idx = [0, 2, 4]  # Indices to select
print(arr[idx])  # [10 30 50]

Boolean Masking (Filter Data)
arr = np.array([10, 20, 30, 40, 50])
mask = arr > 25  # Condition: values greater than 25
print(arr[mask])  # [30 40 50]

This is a powerful way to filter large datasets efficiently!

Summary
NumPy arrays are faster, memory-efficient alternatives to lists.
You can create arrays using np.array(), np.zeros(), np.ones(), etc.
Indexing & slicing allow efficient data manipulation.
Reshaping & flattening change array structures without copying data.
Fancy indexing & boolean masking help filter and access specific data.
Exercises for Practice
Create a 3×3 array filled with random numbers and print its shape.
Convert an array of floats [1.1, 2.2, 3.3] into integers.
Use fancy indexing to extract even numbers from [1, 2, 3, 4, 5, 6].
Reshape a 1D array of size 9 into a 3×3 matrix.
Use boolean masking to filter numbers greater than 50 in an array.

# numpy refer same memory address it can't make copy.