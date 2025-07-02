# Compute x^n

- Binary Exponetiation Approach

- x^n = 3^5 = 3x3x3x3x3 

- O(n) Linear 

- remember if n is decimal -> Bin form - > logn + 1

- log2(8) + 1 = 3 + 1 = 4

- associate with power.

- binform = n, ans = 1, x

1) ans - ans * [x]
2) x = x*x
3) ans = ans*x

- n = 5
- log2(5) + 1 = 3

```c++
int bf;
while(bf>0){
    if(bf%2 == 1){
        ans *= x;

    }
    x *= x // x^2
    bf /= 2;
}
```



- Number can be -ve

```c++
class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        double ans = 1;

        while(binForm > 0){
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;

        }
        return ans;
        
    }
};
```


Final Code
```c++
class Solution {
public:
    double myPow(double x, int n) {
        
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n %2 == 0) return 1.0;
        if(x == -1 && n %2 != 0) return -1.0;
        
        
        long binForm = n;
        if(n < 0){
            x = 1/x;
            binForm = -binForm;
        }
        double ans = 1;

        while(binForm > 0){
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;

        }
        return ans;

    }
};
```