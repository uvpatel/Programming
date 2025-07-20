# Majority Element - Easy

- Array[] = {1,2,2,1,1}
- |_ n/2  _| - element which occur more tha 9/2 = 4.5= 4  ->  MJ > n/2 times.

1) Brute Force
2) optimize
3) More's


## Majority Element
- {1,2,2,1,1} => n = 5
- calculare frequencey ->  n/2
- 1 -> 3 => 3 > n/2 -> 3/2
- {2,2,1,1,1} -> MJ > n/2 times

```c++
for(int val: nums){
    freq = 0;
    for(int el == val){
        if(el == val){
            freq++;
        }
    }
}


if(freq > n/2) => MJ

```