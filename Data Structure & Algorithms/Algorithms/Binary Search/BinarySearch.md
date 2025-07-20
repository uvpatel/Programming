# Binary Search

- Right,Left
- like we find word from dictionary 
- Linear Search Time Complexity: O(n)
- Optimization : O(logn).
- monotonic,monotonus.
- we Apply binary search on sorted string & array.

arr = [-1,0,3,5,9,12]
target = 12

## Steps to solve problem.

1) Find Mid.
2) find St = 0 , End = n - 1
3) mid = end + st / 2
- target > arr[mid] , search in Second Half.
- target < arr[mid] , Search in First Half.
4) then second and first Half We Can Apply Binary Search. Repeat the same process untill the final value get.

5) 1st Half - st to mid -1
6) 2nd Half - mid + 1 to end



#### Important Note: 
- Not use INT_MAX bcz it is very big number so it can do integeroverflow.
- Use st + ((end-st)/ 2)



### Binary Search 
- With Recursion
