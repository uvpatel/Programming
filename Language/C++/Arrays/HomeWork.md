# Use a frequency count:

1) Use a frequency count:
- Traverse the array and count how many times each number appears using a map or hash table.

- After the loop, iterate through the map and collect numbers that appeared exactly once.

2) Alternative (Bit Manipulation) – for very specific cases (e.g., one number appears once, others appear twice):

- Use XOR logic: x ^ x = 0, 0 ^ x = x. XOR all elements — duplicates cancel out, leaving the unique.

3) Sort & Compare Adjacent Elements:

- Sort the array first.

- Then scan through and check if arr[i] != arr[i-1] and arr[i] != arr[i+1].