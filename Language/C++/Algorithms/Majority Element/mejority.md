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

## In Qustion 
- There is no mislead info and anything they give it is a cornar case for better optimisation.
- This is a sorted array.


## Brute -> O(n^2)

## Optimal (O(n)) -> linear time complexity.
- 2 pointer approach.


## Case.
1) Pair sum > Target -> i , j--
2) Pair sum < Target -> i++ , j
3) Pair sum = Target  -> ans -> (i,j)

- i = 0, j = n-1

```c++
while (i < j){
    ps = arr[i] + arr[j];
    if(ps > tar){
        j--
    }else if(ps < tar){
        i++;
    }else{
        return i,j;
    }
}

```

