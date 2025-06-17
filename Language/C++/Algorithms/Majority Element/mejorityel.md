# Pair Sum (Easy Qustion)
- return pair in sorted array with target sum.

- sorted means accending or decending order.

- for e.g [2,7,11,15] , target = 9 return 2,7 or(index ) valid 

1) BrutForce
- find pair and target = pair sum
- in vector we can store index and try to return.
- (2,7) ,(2,11),(2,15)
- (7,11),(7,15)
- (11,15)


```c++
for(int i = 0; i < n; i++){
    for(int j = i*1; j < n; j++){
        // (i,j);
        if(arr[i] + arr[j] == target){
            ans.push_back(i)
            ans.push_back(j)
        }
    }
}
```