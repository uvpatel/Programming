# Kadane's Algorithm

- MSS

## Intution
- add tow number
- +ve + +ve -> +
- -ve + +ve -> +
- +ve + --ve -> - -> if value become negative reset to 0.


- Algo has order and proper situation edge case/cornal case.

- if curSum become -ve reset to 0.
```c++
 int arrSum = 0, maxSum = INT_MIN;

for(int i = 0; i < n; i++){
    arrSum += arr[i];
    maxSum = max(cs,ms);
    // ms = -infinity; if 
    // cs = -ve make it 0.

    if(cs < 0){
        cs = 0;
    }
}
```

## it is like Dynamic Programming we solve on subarray + final answer and then overall we solve.

### DP Concept important.

### important for interview perpactive.
