# learnings

- Use of Loop Structure
- initialization and recursive approach 


## Approach
- Functional 
- Procigral

## Mistakes
- once function return something then it's not work.
- in Python indentation is important.
- in c proramming or c++ if you write another function for doing specific work write on top.

1) First Code will be give perfact output
```python
def multy_table(n):
    for i in range(1,11):
        print(f"{n} x {i} = {n*i}")
    return n*i # return type is optional for this programme.

```

2) Second code will be executed only once,because it return the value in first iteration

```python
def multy_table(n):
    for i in range(1,11):
        print(f"{n} x {i} = {n*i}")
        return n*i

```



